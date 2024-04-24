#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    char arr[n + 1];
    scanf("%s", &arr);
    int first = -1;
    int last = -1;
    for (int i = 0; i < n; ++i) {
      if (arr[i] == 'B') {
        if (first == -1) {
          first = i;
        }
        last = i;
      }
    }
    printf("%d\n", last - first + 1);
  }
  return 0;
}
