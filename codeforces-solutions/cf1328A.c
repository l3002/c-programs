#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a % b == 0) {
      printf("0\n");
    } else {
      printf("%lld\n", b - (a % b));
    }
  }
  return 0;
}
