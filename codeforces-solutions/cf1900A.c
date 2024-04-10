#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    char arr[n + 1];
    scanf("%s", &arr);
    int count = 0;
    int val = 0;
    for (int i = 0; i < n; ++i) {
      if (arr[i] == '.') {
        count++;
      }
      if (arr[i] == '#' || i == (n - 1)) {
        if (count > 2) {
          val = 2;
          break;
        }
        val += count;
        count = 0;
      }
    }
    printf("%d\n", val);
  }
  return 0;
}
