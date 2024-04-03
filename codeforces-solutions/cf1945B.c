#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long a, b, m;
    scanf("%lld %lld %lld", &a, &b, &m);
    printf("%lld\n", ((m / b) + (m / a) + 2));
  }
  return 0;
}
