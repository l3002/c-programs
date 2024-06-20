#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    long long arr[n];
    scanf("%lld", &arr[0]);
    long long max = arr[0];
    int index = 0;
    for (int i = 1; i < n; ++i) {
      scanf("%lld", &arr[i]);
      if (max <= arr[i]) {
        max = arr[i];
        index = i;
      }
    }
    if (index == n - 1) {
      long long secondMax = arr[0];
      for (int i = 1; i < n - 1; ++i) {
        if (arr[i] > secondMax) {
          secondMax = arr[i];
        }
      }
      printf("%lld\n", secondMax + max);
    } else {
      long long secondMax = arr[n - 1];
      printf("%lld\n", secondMax + max);
    }
  }
  return 0;
}
