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
    int flag = 0;
    for (int i = 0; i < n; ++i) {
      if (i + 1 == arr[(arr[i] - 1)]) {
        flag = 1;
      }
    }
    int min = 3;
    if (flag) {
      min = 2;
    }
    printf("%d\n", min);
  }
}
