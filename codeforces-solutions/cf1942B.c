#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
    }
    int mex = 0;
    for (int i = 0; i < n; ++i) {
      if (arr[i] > 0) {
        printf("%d ", mex);
        mex += arr[i];
      } else {
        printf("%d ", mex - arr[i]);
      }
    }
    printf("\n");
  }
  return 0;
}
