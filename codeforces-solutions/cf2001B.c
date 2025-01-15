#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    if (n == 1) {
      printf("1\n");
    } else if (n % 2 == 0) {
      printf("-1\n");
    } else {
      for (int i = 1, j = n; i <= (n / 2) && j >= (n / 2); ++i, --j) {
        printf("%d %d ", j, i);
      }
      printf("%d", n / 2 + 1);
      printf("\n");
    }
  }
  return 0;
}
