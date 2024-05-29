#include <stdio.h>

int gcd(int a, int b) {
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int gcdAB;
    if (a > b) {
      gcdAB = gcd(b, a);
    } else {
      gcdAB = gcd(a, b);
    }
    long long int x = gcdAB * (a / gcdAB) * (b / gcdAB);
    if (x == a) {
      x *= (a / gcdAB);
    }
    if (x == b) {
      x *= (b / gcdAB);
    }
    printf("%lld\n", x);
  }
  return 0;
}
