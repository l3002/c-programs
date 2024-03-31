#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
      scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), compare);
    int result = abs(a[0] - a[n - 1]) + abs(a[n - 1] - a[1]) +
                 abs(a[1] - a[n - 2]) + abs(a[n - 2] - a[0]);
    printf("%d\n", result);
  }
  return 0;
}
