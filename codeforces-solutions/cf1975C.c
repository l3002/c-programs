#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    long long arr[n];
    scanf("%lld",&arr[0]);
    long long max = 0;
    for(int i=0; i<n-1; ++i){
      scanf("%lld",&arr[i+1]);
      if(arr[i] <= arr[i+1] && arr[i] > max){
        max = arr[i];
      }
      else if(arr[i] > arr[i+1] && arr[i+1] > max){
        max = arr[i+1];
      }
    }
    for(int i=0; i<n-2; ++i){
      if(arr[i] <= arr[i+2] && arr[i] > max){
        max = arr[i];
      }
      else if(arr[i] > arr[i+2] && arr[i+2] > max){
        max = arr[i+2];
      }
    }
    printf("%lld\n",max);
  }
  return 0;
}

