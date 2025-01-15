#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, m;
    scanf("%d %d", &n, &m);
    long long arr[n];
    long long max = 0;
    for (int i = 0; i < n; ++i) {
      scanf("%lld", &arr[i]);
      if (arr[i] > max) {
        max = arr[i];
      }
    }
    for (int i = 0; i < m; ++i) {
      char c,space,nl;
      long long l, r;
      scanf("%c",&nl);
      scanf("%c", &c);
      scanf("%c", &space);
      scanf("%lld", &l);
      scanf("%lld", &r);
      if (l <= max && r >= max) {
        if (c == '+') {
          max++;
        } else {
          max--;
        }

        printf("%lld ", max);
      } else {
        printf("%lld ", max);
      }
    }
    printf("\n");
  }
  return 0;
}
