#include <stdio.h>

int main() {
  long long int n;
  scanf("%lld", &n);
  long long int k;
  scanf("%lld", &k);
  long long int half = n % 2 == 0 ? n / 2 : ((n + 1) / 2);
  if (k <= half) {
    printf("%lld\n", 2 * k - 1);
  } else {
    printf("%lld\n", 2 * (k - half));
  }
}
