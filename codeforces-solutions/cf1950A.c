#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a < b && c < b) {
      printf("PEAK\n");
    } else if (a < b && b < c) {
      printf("STAIR\n");
    } else {
      printf("NONE\n");
    }
  }
  return 0;
}
