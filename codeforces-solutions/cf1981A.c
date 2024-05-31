#include <math.h>
#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long int l, r;
    scanf("%lld %lld", &l, &r);
    printf("%lld\n", (long long)log2(r));
  }
  return 0;
}
