#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n,k,d;
    scanf("%d %d %d",&n,&d,&k);
    int count[n];
    int start[n];
    for(int i=0; i<n; ++i){
      count[i] = start[i] = 0;
    }
    for(int i=0; i<k; ++i){
      int l,r;
      scanf("%d %d",&l,&r);
      for(int j=l-1; j<r; ++j){
        count[j]++;
      }
      start[l-1]++;
    }
    int ssuf[n];
    int sum = 0;
    for(int i=n-1; i>=0; --i){
      ssuf[i] = sum;
      sum += start[i];
    }
    int max = 0;
    int minIndex = 0;
    int min = 100001;
    int maxIndex = 0;
    for(int i=0; i<n-d+1; ++i){
      int val = count[i] + ssuf[i] - ssuf[i+d-1];
      if(val > max){
        max = val;
        maxIndex = i+1;
      }
      if(val < min){
        min = val;
        minIndex = i+1;
      }
    }
    printf("%d %d\n",maxIndex,minIndex);
  }
  return 0;
}

