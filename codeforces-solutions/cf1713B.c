#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    long long arr[n];
    long long max = 0;
    for(int i=0; i<n; ++i){
      scanf("%lld",&arr[i]);
      if(max < arr[i]){
        max = arr[i];
      }
    }
    int flag = 0;
    int ans = 1;
    int prev = arr[0];
    if(prev == max){
      flag = 1;
    }
    for(int i=1; i<n; ++i){
      if((!flag && arr[i] < prev) || (flag && arr[i] > prev)){
        ans = 0;
        break;
      }
      if(max == arr[i]){
        flag = 1;
      }
      prev = arr[i];
    }
    if(ans){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
