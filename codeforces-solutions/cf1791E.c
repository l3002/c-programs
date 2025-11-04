#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    long long arr[n];
    int countneg = 0;
    long long sum = 0;
    long long min = 1000000001;
    for(int i=0; i<n; ++i){
      scanf("%lld",&arr[i]);
      if(arr[i] < 0){
        countneg++;
      }
      if(min > llabs(arr[i])){
        min = llabs(arr[i]);
      }
      sum += llabs(arr[i]);
    }
    if(countneg%2 == 0){
      printf("%lld\n",sum);
    }
    else{
      printf("%lld\n",sum - 2*min);
    }
  }
  return 0;
}

