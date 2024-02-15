#include <stdio.h>

int main() {
  int t;
  long long n, k;
  long long ans;
  scanf("%d", &t);
  while (t-- > 0) {
    scanf("%lld", &n);
    scanf("%lld", &k);
    long long maxWithTwo = 2 * n - 2;
    if (k <= 2 * maxWithTwo) {
      if (k % 2 == 0) {
        ans = k / 2;
      } else {
        ans = k / 2 + 1;
      }
    } else {
      ans = maxWithTwo + (k - 2 * maxWithTwo);
    }
    printf("%lld\n", ans);
  }
  return 0;
}
