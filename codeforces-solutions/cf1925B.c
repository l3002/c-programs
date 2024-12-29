#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long x,n;
    scanf("%lld %lld",&x,&n);
    long long ans = 1;
    long long i = 0;
    while(n+i<=x){
      if(x%(n+i) == 0){
        ans = x/(n+i);
        break;
      }
      ++i;
    }
    printf("%lld\n",ans);
  }
  return 0;
}

