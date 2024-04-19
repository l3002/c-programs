#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, a, k;
    scanf("%d %d %d", &n, &a, &k);
    char arr[k + 1];
    int count = a;
    int someCount = a;
    int maxCount = 0;
    int minus = 0;
    scanf("%s", &arr);
    for (int i = 0; i < k; ++i) {
      if (arr[i] == '+') {
        someCount++;
        if (someCount > maxCount) {
          maxCount = someCount;
        }
        count++;
      } else {
        someCount--;
      }
    }
    if (n == a || maxCount >= n) {
      printf("YES\n");
    } else if (count >= n) {
      printf("MAYBE\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
