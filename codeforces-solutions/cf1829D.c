#include <stdio.h>

int check(long long int, long long int);

int check(long long n, long long m) {
  if (n == m) {
    return 1;
  }
  if (n % 3 == 0) {
    long long int nBy3 = n / 3;
    if (nBy3 >= m) {
      if (check(nBy3, m)) {
        return 1;
      }
      return check(2 * nBy3, m);
    } else if (nBy3 < m && 2 * nBy3 >= m) {
      return check(2 * nBy3, m);
    }
  }
  return 0;
}

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    if (n < m) {
      printf("NO\n");
    } else if (check(n, m)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
}
