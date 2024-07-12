#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
      arr[i] = 1;
    }
    for (int i = 2; i < n + 1; ++i) {
      for (int j = i; j < n + 1; j *= i) {
        if (arr[j - 1] % i != 0) {
          arr[j - 1] *= i;
        }
      }
    }
    for (int i = 0; i < n; ++i) {
      printf("%d ", arr[i]);
    }
    printf("\n");
  }
  return 0;
}
