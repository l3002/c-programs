#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", n * k - (k - 1));
  }
}
