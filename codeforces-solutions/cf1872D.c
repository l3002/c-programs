#include <stdio.h>

long long gcd(long long, long long);

long long gcd(long long x, long long y) {
  if (y % x == 0) {
    return x;
  }
  return gcd(y % x, x);
}

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long n, x, y;
    scanf("%lld %lld %lld", &n, &x, &y);
    long long nbx = n / x;
    long long nby = n / y;
    long long common = 0;
    if (x % y == 0) {
      common = nbx;
    } else if (y % x == 0) {
      common = nby;
    } else {
      long long g;
      if (x < y) {
        g = gcd(x, y);
      } else {
        g = gcd(y, x);
      }
      common = (n / ((x * y) / g));
    }
    long long numX = nbx - common;
    long long numY = nby - common;
    long long yCom = (numY * (numY + 1)) / 2;
    long long xCom = (((n - numX) * (n - numX + 1)) / 2);
    long long ans = ((n * (n + 1)) / 2) - xCom - yCom;
    printf("%lld\n", ans);
  }
  return 0;
}
