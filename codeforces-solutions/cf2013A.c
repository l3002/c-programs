#include <math.h>
#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long n;
    scanf("%lld",&n);
    long long x,y;
    scanf("%lld %lld",&x,&y);
    if(x < y){
      printf("%lld\n",(long long)ceil(((double)n)/x));
    }
    else{
      printf("%lld\n",(long long)ceil(((double)n)/y));
    }
  }
  return 0;
}

