#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    long long x;
    scanf("%d %lld", &n, &x);
    long long y = 1;
    while ((y & x) == y) {
      y <<= 1;
    }
    long long aor = 0;
    int i;
    for (i = 0; i < n - 1; ++i) {
      if (i < y) {
        aor |= i;
        printf("%d ", i);
      } else {
        printf("%lld ", x);
      }
    }
    if ((aor|i) == x){
      printf("%d\n",i);
    }
    else{
      printf("%lld\n",x);
    }
  }
  return 0;
}
