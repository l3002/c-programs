#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
    }
    int count = 0;
    int max = 0;
    for (int i = 0; i < n; ++i) {
      if (arr[i] == 0) {
        count++;
      }
      if ((arr[i] == 1 || i == (n - 1)) && (max <= count)) {
        max = count;
      }
      if (arr[i] == 1) {
        count = 0;
      }
    }
    printf("%d\n", max);
  }
  return 0;
}
