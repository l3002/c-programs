#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int val = 2;
    printf("%d ",1);
    int arr[n];
    for(int i=0; i<n; ++i){
      arr[i] = 1;
    }
    arr[0] = 0;
    for(int i=0; i<n; ++i){
      if(arr[i]){
        int x = i+1;
        while(x <= n){
          printf("%d ",x);
          arr[x-1] = 0;
          x *= 2;
        }
      }
    }
    printf("\n");
  }
  return 0;
}
