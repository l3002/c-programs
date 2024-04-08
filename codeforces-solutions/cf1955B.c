#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, c, d;
    scanf("%d %d %d", &n, &c, &d);
    long long arr[n * n];
    for (int i = 0; i < n * n; ++i) {
      scanf("%lld", &arr[i]);
    }
    qsort(arr, n * n, sizeof(long long), compare);
    long long min = arr[0];
    long long prevMin = min;
    long long arr2[n * n];
    for (int i = 0; i < n * n; ++i) {
      if (i % n == 0) {
        arr2[i] = min;
        prevMin = min;
        min += d;
        continue;
      }
      arr2[i] = prevMin + (i % n) * c;
    }
    qsort(arr2, n * n, sizeof(long long), compare);
    int flag = 1;
    for (int i = 0; i < n * n; ++i) {
      if (arr[i] != arr2[i]) {
        flag = 0;
        break;
      }
    }
    if (flag == 0) {
      printf("NO\n");
    } else {
      printf("YES\n");
    }
  }
  return 0;
}
