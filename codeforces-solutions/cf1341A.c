#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, a, b, c, d;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    int totalRiceMin = (a - b) * n;
    int totalRiceMax = (a + b) * n;
    int packMin = c - d;
    int packMax = c + d;
    if (totalRiceMax < packMin || (totalRiceMin > packMax)) {
      printf("No\n");
    } else {
      printf("Yes\n");
    }
  }
  return 0;
}
