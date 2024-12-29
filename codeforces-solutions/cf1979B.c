#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long x,y;
    scanf("%lld %lld",&x,&y);
    long long currx = x;
    long long curry = y;
    long long count = 0;
    while((currx^x) == (curry^y)){
      currx++;
      curry++;
      count++;
    }
    printf("%lld\n",count);
  }
  return 0;
}
