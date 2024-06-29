#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long x[2], y[2];
    scanf("%lld %lld", &x[0], &x[1]);
    scanf("%lld %lld", &y[0], &y[1]);
    int sml = 0;
    int lrg = 1;
    if (x[sml] > x[lrg]) {
      sml = 1;
      lrg = 0;
    }
    if (y[sml] > x[lrg] && y[sml] > y[lrg]) {
      printf("NO\n");
    } else {
      printf("YES\n");
    }
  }
  return 0;
}
