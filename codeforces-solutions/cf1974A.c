#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int x, y;
    scanf("%d %d", &x, &y);
    int numScreen = y / 2;
    if (y % 2 != 0) {
      numScreen++;
    }
    int aCell = numScreen * 7;
    if (y % 2 != 0) {
      aCell += 4;
    }
    if (x > aCell) {
      int rem = x - aCell;
      numScreen += rem / 15;
      if (rem % 15 != 0) {
        numScreen++;
      }
    }
    printf("%d\n", numScreen);
  }
  return 0;
}
