#include <stdio.h>

int main() {
  int t, n;
  scanf("%d", &t);
  while (t-- > 0) {
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
    }
    int countYear = arr[0];
    for (int i = 1; i < n; ++i) {
      if (arr[i] <= countYear) {
        countYear = ((countYear / arr[i]) + 1) * arr[i];
      } else {
        countYear = arr[i];
      }
    }
    printf("%d\n", countYear);
  }
  return 0;
}
