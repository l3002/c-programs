#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    long long arr[n];
    long long max = 0;
    for(int i=0; i<n; ++i){
      scanf("%lld",&arr[i]);
      if(arr[i] > max){
        max = arr[i];
      }
    }
    for(int i=0; i<n-1; ++i){
      if(arr[i] < arr[i+1]){
        if(max > arr[i+1]){
          max = arr[i+1];
        }
      }
      else{
        if(max > arr[i]){
          max = arr[i];
        }
      }
    }
    printf("%lld\n", max - 1);
  }
  return 0;
}

