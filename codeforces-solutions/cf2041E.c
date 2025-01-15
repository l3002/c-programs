#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  if (a == b) {
    printf("1\n%d\n", a);
  } else {
    printf("3\n");
    int val = 3 * a - b;
    for (int i = b; i <= 1000000; ++i) {
      if (val - i <= b) {
        printf("%d %d %d\n", i, b, val-i);
        break;
      }
    }
  }
  return 0;
}
