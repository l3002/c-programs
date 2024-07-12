#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = 0;
    for (int i = 0; i < 5; ++i) {
      if (a <= b && a <= c) {
        a++;
      } else if (b <= a && b <= c) {
        b++;
      } else {
        c++;
      }
    }
    printf("%d\n", a * b * c);
  }
  return 0;
}
