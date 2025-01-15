#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    long long arr[n];
    for(int i=0; i<n; ++i){
      scanf("%lld",&arr[i]);
    }
    long long sum = 0;
    int index = 0;
    int flag = 1;
    for(int i=n-1; i>=0 && flag; --i){
      if(arr[i] - sum == 0){
        continue;
      }
      else{
        for(int j=0; j<arr[i]-sum; ++j){
          if(arr[index] != i+1){
            flag = 0;
            break;
          }
          index++;
        }
        sum += arr[i] - sum;
      }
    }
    if(flag){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}

