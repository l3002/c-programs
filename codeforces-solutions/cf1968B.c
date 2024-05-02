#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    char arr[n + 1];
    char arr1[m + 1];
    scanf("%s", &arr);
    scanf("%s", &arr1);
    int j = 0;
    int count = 0;
    for (int i = 0; i < m; ++i) {
      if (j == n) {
        break;
      }
      if (arr[j] == arr1[i]) {
        count++;
        j++;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}
