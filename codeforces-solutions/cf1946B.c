#include <stdio.h>

#define MOD 1000000007

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n,k;
    scanf("%d %d",&n,&k);
    long long arr[n];
    long long maxsum = 0;
    long long sum = 0;
    long long asum = 0;
    for(int i=0; i<n; ++i){
      scanf("%lld",&arr[i]);
      asum = (asum + arr[i])%MOD;
      if(maxsum < sum + arr[i]){
        maxsum = sum + arr[i];
      }
      if(sum + arr[i] <= 0){
        sum = 0;
      }
      else{
        sum += arr[i];
      }
    }
    maxsum %= MOD;
    long long x = 1;
    for(int i=0; i<k; ++i){
      x = (x*2)%MOD;
    }
    x -= 1;
    long long sk = (maxsum*x)%MOD;
    long long ans = (sk + asum)%MOD;
    if(ans < 0){
      printf("%lld\n",ans + MOD);
    }
    else{
      printf("%lld\n",ans);
    }
  }
  return 0;
}

