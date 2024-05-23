#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    long long arr[2 * n];
    for (int i = 0; i < 2 * n; ++i) {
      scanf("%lld", &arr[i]);
    }
    qsort(arr, 2 * n, sizeof(long long), cmpfunc);
    long long score = 0;
    for (int i = 0; i < 2 * n; i += 2) {
      score += arr[i];
    }
    printf("%lld\n", score);
  }
  return 0;
}
