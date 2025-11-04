#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int arr[n];
    int count[n];

    for (int i = 0; i < n; ++i) {
      count[i] = 0;
    }

    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
      count[arr[i]]++;
    }

    int mex = n;
    for(int i=0; i<n; ++i){
      if(!count[i]){
        mex = i;
        break;
      }
    }

    int bf[mex];

    for(int i=0; i<mex; ++i){
      bf[i] = 0;
    }

    long long mexsum = (((long long) mex) * (mex - 1))/2;
    long long csum = 0;
    int f0 = 1;
    for(int i=0; i<n; ++i){
      if(arr[i] < mex && !bf[arr[i]]){
        csum += arr[i];
        bf[arr[i]] = 1;
      }
      if(csum == mexsum){
        f0 = i+1;
        break;
      }
    }

    for(int i=0; i<mex; ++i){
      bf[i] = 0;
    }

    csum = 0;
    for(int i=f0; i<n; ++i){
      if(arr[i] < mex && !bf[arr[i]]){
        csum += arr[i];
        bf[arr[i]] = 1;
      }
      if(csum == mexsum){
        break;
      }
    }
    if(csum == mexsum){
      printf("2\n1 %d\n%d %d\n",f0, f0+1, n);
    }
    else{
      printf("-1\n");
    }
  }
}
