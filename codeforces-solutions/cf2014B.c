#include <math.h>
#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long n,k;
    scanf("%lld %lld",&n,&k);
    long long x = n - k + 1;
    long long count = n - x + 1;
    long long oddCount = count/2;
    if(x%2 == n%2 && x%2 == 1){
      oddCount = (long long) ceil((double)count/2);
    }
    if((oddCount)%2  == 0){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}

