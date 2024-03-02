#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long n;
    scanf("%lld", &n);
    long long a = 1;
    long long msb = 0;
    for (int i = 0; i < 63; ++i) {
      if ((n & a) == a) {
        msb = a;
      }
      a = a << 1;
    }
    printf("%lld\n", msb);
  }
  return 0;
}
