#include <math.h>
#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int nsb2 = ceil((double)(n * n) / 2);
    int count = 1;
    if (n == 2) {
      printf("%d\n", -1);
    } else {
      for (int i = 0; i < n; ++i) {
        for (int j = i % 2; j < n; j += 2) {
          arr[i][j] = count;
          count++;
        }
        for (int j = (i + 1) % 2; j < n; j += 2) {
          arr[i][j] = nsb2 + 1;
          nsb2++;
        }
      }
      for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
          printf("%d ", arr[i][j]);
        }
        printf("\n");
      }
    }
  }
  return 0;
}
