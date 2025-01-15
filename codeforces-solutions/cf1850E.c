#include <stdio.h>
#include <math.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    long long int x;
    scanf("%d %lld",&n,&x);
    long long b = 0;
    long long c = 0;
    long long ai;
    for(int i=0; i<n; ++i){
      scanf("%lld",&ai);
      b += ai;
      c += ai*ai;
    }
    b *= 2;
    b /= n;
    c -= x;
    c /= n;
    long long D = (long long) sqrt((double) ((b*b) - (4*c)));
    long long w = (-b + D)/2;
    printf("%lld\n",w/2);
  }
  return 0;
}
