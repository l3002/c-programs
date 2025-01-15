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
    long long x = 0;
    int nx = 0;
    for(int i=0; i<n; i+=2){
      x += arr[i];
      nx++;
    }
    long long y = 0;
    int ny = 0;
    for(int i=1; i<n; i+=2){
      y += arr[i];
      ny++;
    }
    if(y%ny == 0 && x%nx == 0 && y/ny == x/nx){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}

