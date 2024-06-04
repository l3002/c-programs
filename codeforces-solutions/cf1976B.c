#include <stdio.h>
#include <stdlib.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    long long a[n];
    long long b[n + 1];
    for (int i = 0; i < n; ++i) {
      scanf("%lld", &a[i]);
    }
    long long sum = 0;
    for (int i = 0; i < n + 1; ++i) {
      scanf("%lld", &b[i]);
    }
    long long min = 10000000001;
    for (int i = 0; i < n; ++i) {
      sum += llabs(a[i] - b[i]);
      long long sml = a[i];
      long long lrg = b[i];
      long long p = 0;
      if (a[i] > b[i]) {
        sml = b[i];
        lrg = a[i];
      }
      if (b[n] > lrg) {
        p = llabs(lrg - b[n]);
      }
      if (b[n] < sml) {
        p = llabs(sml - b[n]);
      }
      if (min > p) {
        min = p;
      }
    }
    sum += min;
    sum++;
    printf("%lld\n", sum);
  }
  return 0;
}
