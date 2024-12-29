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

    int f0 = 0;
    int mex = n;
    for (int i = 0; i < n; ++i) {
      if (count[i] == 0) {
        f0 = 1;
        mex = i;
        break;
      } else if (count[i] == 1) {
        break;
      }
    }

    if (f0) {
      long long sum = ((mex - 1) * (long long)mex) / 2;
      long long csum = 0;
      int check[mex];
      for(int i=0; i<mex; ++i){
        check[mex] = 1; 
      }
      for (int i = 0; i < n; ++i) {
        if (arr[i] < mex) {
          if(check[arr[i]]){
            csum += arr[i];
          }
          check[arr[i]] = 0;
          count[arr[i]]--;
        }
        if (csum == sum) {
          f0 = i+1;
          break;
        }
      }
      int ans = 1;
      for(int i=0; i<mex && ans; ++i){
        printf("count %d %d\n",i,count[i]);
        if(!count[i]){
          ans = 0;
          break;
        }
      }
      if(ans){
        printf("2\n1 %d\n%d %d\n", f0, f0 + 1, n);
      }
      else{
        printf("-1\n");
      }
    } else {
      printf("-1\n");
    }
  }
  return 0;
}
