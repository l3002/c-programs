#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long n;
    scanf("%lld", &n);
    long long arr[n];
    for (int i = 0; i < n; ++i) {
      scanf("%lld", &arr[i]);
    }
    if (n == 1 || n == 2) {
      printf("-1\n");
      continue;
    }
    long long val = arr[0];
    long long count = 1;
    long long min = n;
    for (int i = 1; i < (n - 1); ++i) {
      if (arr[i] == val) {
        count++;
      }
      if (arr[i] != val) {
        if (min > count && count != 0) {
          min = count;
        }
        count = 0;
      }
    }
    if (count == 0) {
      min = 1;
    }
    if (count != 0 && min > ++count) {
      min = count;
    }
    if (min == n) {
      printf("-1\n");
    } else {
      printf("%lld\n", min);
    }
  }
  return 0;
}
