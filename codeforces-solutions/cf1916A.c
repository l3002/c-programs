#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, k;
    scanf("%d %d", &n, &k);
    long long int p = 1;
    int temp;
    for (int i = 0; i < n; ++i) {
      scanf("%d", &temp);
      p *= temp;
    }
    if (2023 % p != 0) {
      printf("NO\n");
    } else {
      printf("YES\n");
      printf("%d ", 2023 / p);
      for (int i = 0; i < k - 1; ++i) {
        printf("1 ");
      }
      printf("\n");
    }
  }
  return 0;
}
