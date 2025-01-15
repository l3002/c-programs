#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long n,k,g;
    scanf("%lld %lld %lld",&n,&k,&g);
    long long gb2 = g/2;
    if(g%2 == 0){
      gb2--;
    }
    if(gb2 == 0){
      printf("0\n");
      continue;
    }
    long long kg = k*g;
    long long kgb = kg/gb2;
    if((kgb < n || (kgb == n && kg%gb2 == 0))){
      printf("%lld\n",kg);
    }
    else{
      long long maxgb2 = gb2*(n-1);
      long long rem = kg - maxgb2;
      long long ans = maxgb2;
      if((rem%g) > gb2){
        ans -= g - (rem%g);
      }
      else{
        ans += rem%g;
      }
      printf("%lld\n",ans);
    }
  }
  return 0;
}

