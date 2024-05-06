#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    int flag = 0;
    if (a % 2 == 0) {
      if ((a / 2 + b) != a) {
        flag = 1;
      }
    }
    if (b % 2 == 0) {
      if ((b / 2 + a) != b) {
        flag = 1;
      }
    }
    if (flag) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
