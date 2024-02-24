#include <stdbool.h>
#include <stdio.h>

int main() {
  int t, n;
  scanf("%d", &t);
  while (t-- > 0) {
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
    }
    int countZero = 0;
    bool hadOne = false;
    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
      if (arr[i] == 1) {
        hadOne = true;
      }
      if (hadOne && arr[i] == 0) {
        count++;
      }
      if (arr[i] == 0 && arr[i + 1] == 1) {
        countZero += count;
        count = 0;
      }
    }
    printf("%d\n", countZero);
  }
  return 0;
}
