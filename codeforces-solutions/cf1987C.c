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
    int count = 0;
    for (int i = n - 1; i >= 0; --i) {
      if (count < arr[i]) {
        count = arr[i];
      } else {
        count++;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}
