#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int k, q;
    scanf("%d %d", &k, &q);
    int a[k];
    for (int i = 0; i < k; ++i) {
      scanf("%d", &a[i]);
    }
    int sml = a[0];
    int n;
    for (int i = 0; i < q; ++i) {
      scanf("%d", &n);
      if (n >= sml) {
        printf("%d ", sml - 1);
      } else {
        printf("%d ", n);
      }
    }
    printf("\n");
  }
  return 0;
}
