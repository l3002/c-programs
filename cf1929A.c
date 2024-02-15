#include <stdio.h>

int main() {
  int t, n;
  long long max, min, input;
  scanf("%d", &t);
  while (t-- > 0) {
    scanf("%d", &n);
    scanf("%lld", &max);
    min = max;
    for (int i = 1; i < n; ++i) {
      scanf("%lld", &input);
      if (input < min) {
        min = input;
      }
      if (input > max) {
        max = input;
      }
    }
    printf("%lld\n", max - min);
  }
  return 0;
}
