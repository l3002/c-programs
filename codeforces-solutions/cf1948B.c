#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; ++i){
      scanf("%d",&arr[i]);
    }
    int last = 0;
    for(int i=1; i<n; ++i){
      if(arr[i] < arr[i-1]){
        last = i;
      }
    }
    int x[n*2];
    int index = 0;
    for(int i=0; i<last; ++i){
      if(arr[i]/10 != 0){
        x[index] = arr[i]/10;
        index++;
      }
      x[index] = arr[i]%10;
      index++;
    }
    int flag = 1;
    for(int i=1; i<index; ++i){
      if(x[i] < x[i-1]){
        flag = 0;
        break;
      }
    }
    if(flag && last && x[index-1] > arr[last]){
      flag = 0;
    }
    if(flag){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
