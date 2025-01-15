#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long n,k;
    scanf("%lld %lld",&n,&k);
    long long x = 1;
    long long count = 0;
    while(x <= n){
      count++;
      x = x << 1;
    }
    if(count > k){
      printf("%lld\n",((long long)1)<<k);
    }
    else{
      printf("%lld\n",n+1);
    }
  }
  return 0;
}

