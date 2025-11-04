#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    char arr[n][n+1];
    for(int i=0; i<n; ++i){
      scanf("%s",&arr[i]);
    }
    int count = 0;
    for(int i=0; i<n; ++i){
      for(int j=0; j<n; ++j){
        if(arr[i][j] != arr[n-j-1][i]){
          count += abs(arr[i][j] - arr[n-j-1][i]);
          if(arr[n-j-1][i] < arr[i][j]){
            arr[n-j-1][i] = arr[i][j];
          }
          else{
            arr[i][j] = arr[n-j-1][i];
          }
        }
      }
    }
    printf("%d\n",count);
  }
  return 0;
}

