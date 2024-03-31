#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
      char arr[2 * n + 1];
      for (int j = 0; j < n; ++j) {
        if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)) {
          printf("##");
          arr[2 * j] = '#';
          arr[(2 * j) + 1] = '#';
        } else if ((i % 2 == 0 && j % 2 != 0) || (i % 2 != 0 && j % 2 == 0)) {
          printf("..");
          arr[2 * j] = '.';
          arr[(2 * j) + 1] = '.';
        }
      }
      arr[2 * n] = '\0';
      printf("\n");
      printf("%s\n", arr);
    }
  }
  return 0;
}
