#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    long long k;
    scanf("%d %lld", &n, &k);
    if (n == 1) {
      printf("%lld\n", k);
    } else {
      long long val = 1;
      while (val - 1 <= k) {
        val = val << 1;
      }
      val = (val >> 1) - 1;
      int num = 1;
      printf("%lld", val);
      if (val != k) {
        num++;
        printf(" %lld", k - val);
      }
      for (int i = 0; i < n - num; ++i) {
        printf(" 0");
      }
      printf("\n");
    }
  }
}
