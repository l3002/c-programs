#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long m,k,a1,ak;
    scanf("%lld %lld %lld %lld",&m,&k,&a1,&ak);
    long long x = m/k;
    long long y = m%k;
    if(y > a1){
      y -= a1;
      a1 = 0;
    }
    else{
      a1 -= y;
      y = 0;
    }
    if(ak < x){
      x -= ak;
    }
    else{
      x = 0;
    }
    if(a1/k < x){
      x -= a1/k;
    }
    else{
      x = 0;
    }
    long long ans = x + y;
    printf("%lld\n",ans);
  }
  return 0;
}

