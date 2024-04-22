#include <stdio.h>

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  int count = 1;
  while (n * 3 <= k * 2) {
    count++;
    n *= 3;
    k *= 2;
  }
  printf("%d\n", count);
  return 0;
}
