#include <math.h>
#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long l, t,n,P;
    scanf("%lld %lld %lld %lld",&n,&P,&l,&t);
    long long tasks = (((n-1)/7) + 1);
    long long numt = (long long) ceil(((double)tasks)/2);
    long long MaxPt = ((2*t)+l)*numt;
    if(tasks%2 != 0){
      MaxPt -= t;
    }
    long long ans;
    if(MaxPt >= P){
      ans = (long long) ceil((double)P/((2*t)+l));
      printf("%lld\n",n - ans);
    }
    else{
      ans = numt + (long long)(ceil(((double)(P-MaxPt))/l));
      printf("%lld\n",n - ans);
    }
  }
  return 0;
}

