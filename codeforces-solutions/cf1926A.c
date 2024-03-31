#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    char a[6];
    scanf("%s", &a);
    int countA = 0;
    for (int i = 0; i < 5; ++i) {
      if (a[i] == 'A') {
        countA++;
      }
    }
    if (countA >= 3) {
      printf("A\n");
    } else {
      printf("B\n");
    }
  }
  return 0;
}
