#include <stdio.h>
#include <string.h>

#define MAX 200001

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    char arr[MAX];
    scanf("%s", &arr);
    char ans[MAX + 1];
    int n = strlen(arr);
    int max = n;
    for (int i = n - 1; i >= 0; --i) {
      if (arr[i] >= '5') {
        max = i;
      }
    }
    if (max == n) {
      printf("%s\n", arr);
    } else {
      char ans[MAX + 1];
      char prev = arr[max];
      int index = 0;
      for (int i = n - 1; i >= 0; --i) {
        if (i >= max) {
          ans[index] = '0';
        }
        if(i < max && prev >= '5'){
          ans[index] = (((arr[i] - '0')+1)%10) + '0';
          prev = ans[index];
          ans[index-1] = '0';
        }
        else if(i < max && prev < '5'){
          ans[index] = arr[i];
        }
        index++;
      }
      if(prev >= '5'){
        ans[index] = '1';
        ans[index-1] = '0';
        index++;
      }
      ans[index] = '\0';
      int l = strlen(ans);
      for(int i=l-1; i>=0; --i){
        printf("%c",ans[i]);
      }
      printf("\n");
    }
  }
  return 0;
}
