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
    int first = arr[0];
    int last = arr[n - 1];
    int firstIndex = 1;
    int lastIndex = 1;
    for (int i = 1; i < n; ++i) {
      if (arr[i] != first) {
        break;
      }
      firstIndex += 1;
    }
    for (int i = n - 2; i >= 0; --i) {
      if (arr[i] != last) {
        break;
      }
      lastIndex += 1;
    }
    if (lastIndex == n) {
      printf("0\n");
    } else if (first == last) {
      printf("%d\n", n - (lastIndex + firstIndex));
    } else if (firstIndex > lastIndex) {
      printf("%d\n", n - firstIndex);
    } else {
      printf("%d\n", n - lastIndex);
    }
  }
  return 0;
}
