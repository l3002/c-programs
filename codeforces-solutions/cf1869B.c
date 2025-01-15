#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n,k,a,b;
    scanf("%d %d %d %d",&n,&k,&a,&b);
    long long x[n];
    long long y[n];
    for(int i=0; i<n; ++i){
      scanf("%lld %lld",&x[i],&y[i]);
    }
    long long minCostA = 4000000001;
    long long minCostB = 4000000001;
    for(int i=0; i<k; ++i){
      long long costiA = llabs(x[i] - x[a-1]) + llabs(y[i] - y[a-1]);
      long long costiB = llabs(x[i] - x[b-1]) + llabs(y[i] - y[b-1]);
      if(costiA < minCostA){
        minCostA = costiA;
      }
      if(costiB < minCostB){
        minCostB = costiB;
      }
    }
    long long costA = 0;
    long long costB = 0;
    if(a > k){
      costA = minCostA;
    }
    if(b > k){
      costB = minCostB;
    }
    long long costAB = llabs(x[a-1] - x[b-1]) + llabs(y[a-1] - y[b-1]);  
    if(minCostA + minCostB < costAB){
      printf("%lld\n",minCostA + minCostB);
    }
    else{
      printf("%lld\n",costAB);
    }
  }
  return 0;
}

