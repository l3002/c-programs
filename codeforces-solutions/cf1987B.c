#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    long long arr[n];
    scanf("%lld", &arr[0]);
    long long next = arr[0];
    long long sorta[n];
    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
      scanf("%lld", &arr[i]);
      if (next < arr[i]) {
        next = arr[i];
      } else {
        sorta[count] = next - arr[i];
        count++;
      }
    }
    long long prev = 0;
    long long cost = 0;
    qsort(sorta, count, sizeof(long long), compare);
    int size = count + 1;
    for (int i = 0; i < count; ++i) {
      cost += size * (sorta[i] - prev);
      size--;
      prev = sorta[i];
    }
    printf("%lld\n", cost);
  }
}
