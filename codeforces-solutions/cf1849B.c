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
  }
  return 0;
}

