#include <stdio.h>

int main() {
  int n, k, l, c, d, p, nl, np;
  scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
  int arr[3];
  arr[0] = (k * l) / nl;
  arr[1] = c * d;
  arr[2] = p / np;
  int min = arr[0];
  for (int i = 0; i < 3; ++i) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  printf("%d", min / n);
  return 0;
}
