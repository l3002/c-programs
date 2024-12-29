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
    if(n == 1){
      printf("1\n");
      continue;
    }
    long long diff[n-1];
    long long max = 0;
    for(int i=0; i<n-1; ++i){
      diff[i] = arr[i+1] - arr[i];
      if(diff[i] > max){
        max = diff[i];
      }
    }

    if(n%2 != 0){
      for(int i=0; i<n; i+=2){
        long long maxl = 0;
        for(int j=i-2; j >= 0; j -= 2){
          if(maxl < diff[j]){
            maxl = diff[j];
          }
        }
        long long maxr = 0;
        for(int j=i+1; j<n; j+=2){
          if(maxr < diff[j]){
            maxr = diff[j];
          }
        }
        if(maxr < maxl && max > maxl){
          max = maxl;
        }
        if(maxr >= maxl && max > maxr){
          max = maxr;
        }
      }
    }
    printf("%lld\n",max);
  }
  return 0;
}

