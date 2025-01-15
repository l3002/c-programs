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
      if(arr[i] > max){
        max = arr[i];
      }
    }
    double halfmax1 = ((double) max+1)/2;
    double halfmax = ((double)max)/2;
    long long min = max;
    int count = 0;
    int flag = 0;
    for(int i=0; i<n; ++i){
      if(halfmax1 <= arr[i] && min > arr[i]){
        min = arr[i];
      }
    }
    for(int i=0; i<n; ++i){
      if(halfmax1 > arr[i]){
        count++;
      }
      if(max - min == arr[i]){
        flag = 1;
      }
    }
    if(max%2 == 0 && flag){
      count--;
    }
    printf("%d\n",count);
  }
  return 0;
}

