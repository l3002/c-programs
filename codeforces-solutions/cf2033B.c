#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=-1; i<n; ++i){
      for(int j=n-2; j>=0; --j){
        scanf("%d",&arr[i][j]);
      }
    }
    for(int i=-1; i<n; ++i){
      for(int j=-1; j<n; ++j){

      }
    }
  }
  return 0;
}

