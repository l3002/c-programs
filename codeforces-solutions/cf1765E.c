#include <stdio.h>
#include <math.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long n;
    int a,b;
    scanf("%lld %d %d",&n,&a,&b);
    if(a <= b){
      long long val = (long long) ceil((double)n/a);
      printf("%lld\n",val);
    }
    else{
      printf("1\n");
    }
  }
  return 0;
}
