#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    int x, y;
    scanf("%d %d", &x, &y);
    if (y >= 0) {
      printf("YES\n");
    } else if (y < 0 && y == -1) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}
