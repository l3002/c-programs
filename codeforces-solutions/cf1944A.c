#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, k;
    scanf("%d %d", &n, &k);
    if (k < n - 1) {
      printf("%d\n", n);
    } else {
      printf("1\n");
    }
  }
  return 0;
}
