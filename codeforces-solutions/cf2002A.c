#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long n,m,k;
    scanf("%lld %lld %lld",&n,&m,&k);
    long long minx = n;
    if(minx > k){
      minx = k;
    }
    long long miny = m;
    if(miny > k){
      miny = k;
    }
    printf("%lld\n",minx*miny);
  }
  return 0;
}
