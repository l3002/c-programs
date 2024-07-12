#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int val = n;
    for (int i = 0; i < n - m; ++i) {
      printf("%d ", val--);
    }
    for (int i = 0; i < m; ++i) {
      printf("%d ", i + 1);
    }
    printf("\n");
  }
  return 0;
}
