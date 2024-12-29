#include <stdio.h>

#define MODULO 1000000007

int main() {
  int t;
  scanf("%d", &t);
  int n[t];
  int k[t];
  for (int i = 0; i < t; ++i) {
    scanf("%d", &n[i]);
  }
  long long ans[100001];
  int x = 1;
  ans[0] = 1;
  while (x <= 100000) {
    ans[x] = (ans[x-1] * 2) % MODULO;
    x++;
  }
  for (int i = 0; i < t; ++i) {
    scanf("%d", &k[i]);
    printf("%lld\n", ans[k[i]]);
  }
  return 0;
}
