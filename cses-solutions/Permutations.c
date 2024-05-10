#include <stdio.h>

int main() {
  long long int n;
  scanf("%lld", &n);
  if (n > 1 && n < 4) {
    printf("NO SOLUTION\n");
    return 0;
  }
  for (long long int i = 2; i <= n; i += 2) {
    printf("%lld ", i);
  }
  for (long long int i = 1; i <= n; i += 2) {
    printf("%lld ", i);
  }
  printf("\n");
  return 0;
}
