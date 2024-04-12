#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    if (m <= n) {
      int rem = n % m;
      int quo = n / m;
      if (rem != 0) {
        quo++;
      }
      int val = n - quo;
      if (k < val) {
        printf("YES\n");
      } else {
        printf("NO\n");
      }
    } else if (k < (n - 1)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
