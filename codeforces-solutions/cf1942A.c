#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    if (n == k) {
      for (int i = 0; i < n; ++i) {
        printf("%d ", 1);
      }
      printf("\n");
    } else if (k == 1) {
      for (int i = 0; i < n; ++i) {
        printf("%d ", i + 1);
      }
      printf("\n");
    } else {
      printf("-1\n");
    }
  }
  return 0;
}
