#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    if (b < (2 * a)) {
      printf("%d\n", ((n / 2) * b) + ((n % 2) * a));
    } else {
      printf("%d\n", n * a);
    }
  }
  return 0;
}
