#include <stdio.h>

int main() {
  int t;
  scanf("%d\n", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    long long arr[n][n];
    long long ans[n];
    for (int i = 0; i < n; ++i) {
      long long ai = ~0;
      for (int j = 0; j < n; ++j) {
        scanf("%lld", &arr[i][j]);
        if(i != j){
          ai &= arr[i][j];
        }
      }
      ans[i] = ai;
    }
    int flag = 0;
    for(int i=0; i<n; ++i){
      for(int j=0; j<n; ++j){
        if(i != j && arr[i][j] != (ans[i] | ans[j])){
          flag = 1;
          break;
        }
      }
    }
    if(flag){
      printf("NO\n");
    }
    else if(n == 1){
      printf("YES\n");
      printf("1\n");
    }
    else{
      printf("YES\n");
      for(int i=0; i<n; ++i){
        printf("%lld ",ans[i]);
      }
      printf("\n");
    }
  }
  return 0;
}
