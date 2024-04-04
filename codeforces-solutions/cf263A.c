#include <stdio.h>
#include <stdlib.h>

int main() {
  int pos1;
  int a = -1;
  int x = -1;
  int y = -1;
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      scanf("%d", &a);
      if (a == 1) {
        x = i + 1;
        y = j + 1;
      }
    }
  }
  printf("%d", abs(x - 3) + abs(y - 3));
  return 0;
}
