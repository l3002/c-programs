#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  long long int arr[n];
  int max = 1;
  int count = 1;
  for (int i = 0; i < n; ++i) {
    scanf("%lld", &arr[i]);
  }
  long long int prev = arr[0];
  for (int i = 1; i < n; ++i) {
    if (arr[i] >= prev) {
      count++;
    }
    if (arr[i] < prev || (i + 1) == n) {
      if (max < count) {
        max = count;
      }
      count = 1;
    }
    prev = arr[i];
  }
  printf("%d\n", max);
  return 0;
}
