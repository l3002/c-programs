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
      sum += arr[i];
    }
    long long max = sum;
    while(n >= 2){
      sum = 0;
      long long sum2 = arr[n-1] - arr[0];
      long long sum2rev = -sum2;
      for(int i=0; i<n-1; ++i){
        sum += arr[i];
        arr[i] = arr[i+1] - arr[i];
      }
      sum += arr[n-1];
      n--;
      if(max < sum){
        max = sum;
      }
      if(max < sum2){
        max = sum2;
      }
      if(max < sum2rev){
        max = sum2rev;
      }
    }
    printf("%lld\n",max);
  }
  return 0;
}

