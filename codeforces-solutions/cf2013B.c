#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    long long arr[n];
    long long sum = 0;
    for(int i=0; i<n; ++i){
      scanf("%lld",&arr[i]);
      if(i < n-2){
        sum += arr[i];
      }
    }
    printf("%lld\n", arr[n-1] - arr[n-2] + sum);
  }
  return 0;
}

