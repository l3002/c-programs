#include <math.h>
#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int check[n];
    int arr[n];
    for(int i=0; i<n; ++i){
      scanf("%d",&arr[i]);
      check[i] = 1;
    }
    int ans = 0;
    for(int i=0; i<n; ++i){
      if(arr[i] == i+1){
        check[i] = 0;
      }
      if(check[i]){
        int x = i;
        int count = 0;
        while(check[x]){
          check[x] = 0;
          x = arr[x]-1;
          count++;
        }
        ans += ceil((double)count/2) - 1;
      }
    }
    printf("%d\n",ans);
  }
  return 0;
}

