#include <stdio.h>
#include <math.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long l,r;
    scanf("%lld %lld",&l,&r);
    long long a = 0, b = 0;
    for(int i=l; i<=r; ++i){
      if(i%2 == 0 && i != 2){
        a = b = i/2;
        if(a%2 != 0){
          a--;
          b++;
        }
        break;
      }
    }
    if(l == r && l%2 != 0){
      for(int i=2; i<=(int) sqrt((double) l); ++i){
        if(l%i == 0){
          a = i;
          b = l-i;
          break;
        }
      }
    }
    if(a && b){
      printf("%lld %lld\n",a,b);
    }
    else{
      printf("-1\n");
    }
  }
  return 0;
}
