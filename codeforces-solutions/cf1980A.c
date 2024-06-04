#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, m;
    scanf("%d %d", &n, &m);
    char arr[n + 1];
    scanf("%s", &arr);
    int a[7] = {0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < n; ++i) {
      if (arr[i] == 'A') {
        a[0] = a[0] + 1;
      }
      if (arr[i] == 'B') {
        a[1] = a[1] + 1;
      }
      if (arr[i] == 'C') {
        a[2] = a[2] + 1;
      }
      if (arr[i] == 'D') {
        a[3] = a[3] + 1;
      }
      if (arr[i] == 'E') {
        a[4] = a[4] + 1;
      }
      if (arr[i] == 'F') {
        a[5] = a[5] + 1;
      }
      if (arr[i] == 'G') {
        a[6] = a[6] + 1;
      }
    }
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
      if (a[i] < m) {
        sum += m - a[i];
      }
    }
    printf("%d\n", sum);
  }
  return 0;
}
