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
    int max = 0;
    for(int i=0; i<n && n-i+1 > max; ++i){
      int count = 0;
      for(int j= i+1; j<n; ++j){
        if(arr[i] >= arr[j]){
          count++;
        }
      }
      if(count > max){
        max = count;
      }
    }
    printf("%d\n",n-max-1);
  }
  return 0;
}

