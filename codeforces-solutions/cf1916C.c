#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    long long arr[n];
    long long prefixSum = 0;
    int countO = 0;
    for(int i=0; i<n; ++i){
      scanf("%lld",&arr[i]);
      prefixSum += arr[i];
      if(arr[i]%2 != 0){
        countO++;
      }
      if(i == 0){
        printf("%lld ",prefixSum);
      }
      else{
        int turnO = (countO/3) + ((countO%3)%2);
        printf("%lld ",prefixSum - turnO);
      }
    }
    printf("\n");
  }
  return 0;
}
