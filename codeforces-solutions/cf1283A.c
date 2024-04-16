#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int h, m;
    scanf("%d %d", &h, &m);
    int totalMinLeft = (((24 - h) * 60) - m);
    printf("%d\n", totalMinLeft);
  }
  return 0;
}
