#include <stdio.h>

long long gcd(long long a, long long b){
  if(b%a == 0){
    return a;
  }
  return gcd(b%a,a);
}

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    long long sum = 0;
    long long arr[n];
    for(int i=0; i<n; ++i){
      scanf("%lld",&arr[i]);
      sum += arr[i];
    }
    long long max = 0;
    long long csum = 0;
    for(int i=0; i<n-1; ++i){
      csum += arr[i];
      long long g;
      if(sum - csum > csum){
        g = gcd(csum, sum - csum);
      }
      else{
        g = gcd(sum - csum, csum);
      }
      if(g > max){
        max = g;
      }
    }
    printf("%lld\n",max);
  }
  return 0;
}
