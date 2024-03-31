#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    char string[n + 1];
    scanf("%s", &string);
    int count = 0;
    for (int i = 0; i < n - 2; ++i) {
      if ((i < n - 5) && string[i] == 'm' && string[i + 1] == 'a' &&
          string[i + 2] == 'p' && string[i + 3] == 'i' &&
          string[i + 4] == 'e') {
        count++;
        i += 4;
      } else if ((string[i] == 'm' && string[i + 1] == 'a' &&
                  string[i + 2] == 'p') ||
                 (string[i] == 'p' && string[i + 1] == 'i' &&
                  string[i + 2] == 'e')) {
        i += 2;
        count++;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}
