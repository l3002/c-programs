#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int sol = 1;
    for (int i = n - 1; i >= 0; --i) {
      for (int j = n - 1; j >= 2; --j) {
        if (n % j == 0 && i % j == 0) {
          sol = i;
          break;
        }
      }
      if (sol != 1) {
        break;
      }
    }
    if (sol == 1) {
      printf("%d\n", n - 1);
    } else {
      printf("%d\n", sol);
    }
  }
  return 0;
}
