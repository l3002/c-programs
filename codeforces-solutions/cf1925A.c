#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    char str[27] = "abcdefghijklmnopqrstuvwxyz";
    int n, k;
    scanf("%d %d", &n, &k);
    char prt[k + 1];
    for (int j = 0; j < k; ++j) {
      prt[j] = str[j];
    }
    prt[k] = '\0';
    for (int i = 0; i < n; ++i) {
      printf("%s", prt);
    }
    printf("\n");
  }
  return 0;
}
