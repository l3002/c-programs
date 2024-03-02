#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    char binarr0[n + 1];
    char binarr1[n + 1];
    scanf("%s", &binarr0);
    scanf("%s", &binarr1);
    int right = 1;
    int down = 0;
    int count = 0;
    char result[n + 2];
    result[0] = binarr0[0];
    for (int i = 0; i < n - 1; ++i) {
      if (binarr0[right] < binarr1[down]) {
        result[i + 1] = binarr0[right];
        count = 0;
      } else if (binarr0[right] == binarr1[down]) {
        result[i + 1] = binarr0[right];
        count++;
      } else {
        break;
      }
      right++;
      down++;
    }
    for (int i = down; i < n; ++i) {
      result[i + 1] = binarr1[i];
    }
    result[n + 1] = '\0';
    printf("%s\n", result);
    printf("%d\n", count + 1);
  }
  return 0;
}
