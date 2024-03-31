#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, m, k;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    int arr[n];
    int arr1[m];
    int count = 0;
    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
    }
    for (int i = 0; i < m; ++i) {
      scanf("%d", &arr1[i]);
      for (int j = 0; j < n; ++j) {
        if ((k - arr[j]) >= arr1[i]) {
          count++;
        }
      }
    }
    printf("%d\n", count);
  }
  return 0;
}
