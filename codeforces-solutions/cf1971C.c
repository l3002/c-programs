#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int cifh = 0;
    int difh = 0;
    int min = b;
    int max = a;
    if (a < b) {
      min = a;
      max = b;
    }
    for (int i = min + 1; i < max; ++i) {
      if (i == c) {
        cifh = 1;
      }
      if (i == d) {
        difh = 1;
      }
    }
    if (((cifh == 1 && difh == 1) || (cifh == 0 && difh == 0)) &&
        ((c != a && d != b) || (c != b && d != a))) {
      printf("NO\n");
    } else {
      printf("YES\n");
    }
  }
  return 0;
}
