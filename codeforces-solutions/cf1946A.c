#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
  return (*(long long int *)a - *(long long int *)b);
}

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    long long arr[n];
    for (int i = 0; i < n; ++i) {
      scanf("%lld", &arr[i]);
    }
    qsort(arr, n, sizeof(long long), compare);
    int mid = n / 2;
    if (n % 2 == 0) {
      mid--;
    }
    long long num = arr[mid];
    int count = 1;
    for (int i = mid + 1; arr[i] == num; ++i) {
      count++;
    }
    printf("%d\n", count);
  }
  return 0;
}
