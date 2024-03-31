#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long int a, b, c;
    scanf("%lld", &a);
    scanf("%lld", &b);
    scanf("%lld", &c);
    if (((b % 3) != 0) && (c + (b % 3) < 3)) {
      printf("-1\n");
    } else {
      printf("%lld\n", a + (b / 3) + (((b % 3) + c) / 3) +
                           ((((b % 3) + c) % 3) == 0 ? 0 : 1));
    }
  }
  return 0;
}
