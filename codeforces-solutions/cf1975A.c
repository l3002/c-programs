#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    int min = 1000001;
    int mi = 0;
    for(int i=0; i<n; ++i){
      scanf("%d",&arr[i]);
      if(min > arr[i]){
        min = arr[i];
        mi = i;
      }
    }
    int flag = 1;
    for(int i=mi; i<n-1; ++i){
      if(arr[i] > arr[i+1]){
        flag = 0;
        break;
      }
    }
    for(int i=0; i+1<mi; ++i){
      if(arr[i] > arr[i+1]){
        flag = 0;
        break;
      }
    }
    if(mi != 0 && arr[0] < arr[n-1]){
      flag = 0;
    }
    if( flag){
      printf("Yes\n");
    }
    else{
      printf("No\n");
    }
  }
  return 0;
}

