#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    long long a[n];
    long long b[m];
    int c[k];
    for (int i = 0; i < k; ++i) {
      c[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
      scanf("%lld", &a[i]);
      if (a[i] <= k) {
        c[a[i] - 1] = 1;
      }
    }
    for (int i = 0; i < m; ++i) {
      scanf("%lld", &b[i]);
      if (b[i] <= k) {
        if (c[b[i] - 1] == 1 || c[b[i] - 1] == 3) {
          c[b[i] - 1] = 3;
        } else {
          c[b[i] - 1] = 2;
        }
      }
    }
    int countA = 0;
    int countB = 0;
    int flag = 1;
    for (int i = 0; i < k; ++i) {
      if (c[i] == 1) {
        countA++;
      } else if (c[i] == 2) {
        countB++;
      }
      flag = flag && c[i];
    }
    int half = k / 2;
    if (countA <= half && countB <= half && flag) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
}
