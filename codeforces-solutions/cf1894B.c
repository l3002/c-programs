#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int count[100];
    for (int i = 0; i < 100; ++i) {
      count[i] = 0;
    }
    int arr[n];
    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
      count[arr[i] - 1]++;
    }
    int check = 0;
    for (int i = 0; i < 100 && check < 2; ++i) {
      if (count[i] > 1) {
        check++;
      }
    }
    if (check < 2) {
      printf("-1\n");
    } else {
      int ans[n];
      for (int i = 0; i < n; ++i) {
        ans[i] = 1;
      }
      int d2 = 1;
      int d3 = 1;
      int prev;
      for (int i = 0; i < n; ++i) {
        if (!d2 && !d3) {
          break;
        }
        if (count[arr[i] - 1] > 1 && d2) {
          ans[i] = 2;
          prev = arr[i];
          d2 = 0;
        } else if (count[arr[i] - 1] > 1 && arr[i] != prev) {
          ans[i] = 3;
          d3 = 0;
        }
      }
      for (int i = 0; i < n; ++i) {
        printf("%d ", ans[i]);
      }
      printf("\n");
    }
  }
  return 0;
}
