#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n,m;
    scanf("%d %d",&n,&m);
    long long int a[n];
    long long int b[m];
    long long bOR = 0;
    long long x = 0,y = 0;
    for(int i=0; i<n; ++i){
      scanf("%lld",&a[i]);
      y ^= a[i];
    }
    for(int i=0; i<m; ++i){
      scanf("%lld",&b[i]);
      bOR |= b[i];
    }
    for(int i=0; i<n; ++i){
      x ^= bOR | a[i];
    }
    if(n%2 == 0){
      printf("%lld %lld\n",x,y);
    }
    else{
      printf("%lld %lld\n",y,x);
    }
  }
  return 0;
}

