#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int arr[n][n-1];
    int first;
    int firstCount = 0;
    int pos = 0;
    for(int i=0; i<n; ++i){
      for(int j=0; j<n-1; ++j){
        scanf("%d",&arr[i][j]);
      }
      if(i == 0){
        first = arr[i][0];
      }
      else if(arr[i][0] == first){
        firstCount++;
      }
      else if(arr[i][0] != first){
        pos = i;
      }
    }
    if(firstCount == 0){
      printf("%d ",arr[1][0]);
      for(int i=0; i<n-1; ++i){
        printf("%d ",arr[0][i]);
      }
    }
    else{
      printf("%d ",arr[pos-1][0]);
      for(int i=0; i<n-1; ++i){
        printf("%d ",arr[pos][i]);
      }
    }
    printf("\n");
  }
  return 0;
}

