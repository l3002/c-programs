#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int arr[2][n];
    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[0][i]);
    }
    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[1][i]);
    }
    long long ans;
    long long maxsum = 0;
    long long maxmin = -200001; 
    for(int i = 0; i < n; ++i){
      if(arr[0][i] > arr[1][i]){
        maxsum += arr[0][i];
        if(maxmin < arr[1][i]){
          maxmin = arr[1][i];
        }
      }
      else{
        maxsum += arr[1][i];
        if(maxmin < arr[0][i]){
          maxmin = arr[0][i];
        }
      }
    }
    ans = maxsum + maxmin;
    printf("%lld\n", ans);
  }
}
