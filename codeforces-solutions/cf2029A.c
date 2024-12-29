#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long l,r,k;
    scanf("%lld %lld %lld", &l,&r,&k);
    int rbk = r/k;
    if(l > rbk){
      printf("0\n");
    }
    else{
      printf("%lld\n",rbk - l + 1);
    }
  }
  return 0;
}

