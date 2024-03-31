#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    if (n % 2 == 1) {
      printf("NO");
    } else {
      printf("YES\n");
      for (int i = 0; i < (n / 2); ++i) {
        printf("AAB");
      }
    }
    printf("\n");
  }
  return 0;
}
