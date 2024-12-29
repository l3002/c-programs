#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long n,m,r,c;
    scanf("%lld %lld %lld %lld",&n,&m,&r,&c);
    long long ans = (n-r)*m + (m-c) + (n-r)*(m-1);
    printf("%lld\n",ans);
  }
  return 0;
}

