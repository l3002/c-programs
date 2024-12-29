#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long n;
    scanf("%lld", &n);
    int arr[32];
    int index = 0;
    int count = 0;
    while (n > 0) {
      arr[index] = n % 2;
      if(arr[index] == 1 && count > 0){
        arr[index] = 0;
        count++;
      }
      else if(arr[index] == 1){
        count++;
      }
      else if(arr[index] == 0 && count > 1){
        arr[index] = 1;
        arr[index-count] = -1;
        count = 1;
      }
      else {
        count = 0;
      }
      index++;
      n /= 2;
    }
    if(count > 1){
      arr[index - count] = -1;
      arr[index] = 1;
      index++;
    }

    printf("%d\n",index);
    for(int i=0; i<index; ++i){
      printf("%d ",arr[i]);
    }
    printf("\n");
  }
  return 0;
}
