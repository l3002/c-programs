#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long n,k;
    scanf("%lld %lld",&n,&k);
    long long ans = 0;
    if(k == 1){
      ans = n;
    }
    else{
      while(n > 0){
        ans += n%k;
        n /= k;
      }
    }
    printf("%lld\n",ans);
  }
  return 0;
}

