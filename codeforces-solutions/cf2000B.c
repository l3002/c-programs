#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[0]);
    int max = arr[0];
    int min = arr[0];
    int flag = 1;
    for(int i=1; i<n; ++i){
      scanf("%d",&arr[i]);
      if(arr[i] != min-1 && arr[i] != max+1){
        flag = 0;
      }
      if(arr[i] < min){
        min = arr[i];
      }
      if(arr[i] > max){
        max = arr[i];
      }
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
