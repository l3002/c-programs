#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int firstVal;
  scanf("%d", &firstVal);
  int currentVal;
  int ans = -1;
  for (int i = 1; i < n; ++i) {
    scanf("%d", &currentVal);
    if (firstVal < currentVal) {
      ans = i + 1;
      break;
    }
  }
  printf("%d\n", ans);
  return 0;
}
