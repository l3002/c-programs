#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long n, a, b;
    scanf("%lld %lld %lld", &n, &a, &b);
    long long int i = b - a + 1;
    if (i < 0) {
      i = 0;
    }
    if (i > n) {
      i = n;
    }
    long long int val = ((n - i) * a) + (((b + 1) * i) - ((i * (i + 1)) / 2));
    printf("%lld\n", val);
  }
  return 0;
}
