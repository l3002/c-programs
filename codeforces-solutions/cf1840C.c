#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, k;
    scanf("%d %d", &n, &k);
    long long int q;
    scanf("%lld", &q);
    long long int arr[n];
    for (int i = 0; i < n; ++i) {
      scanf("%lld", &arr[i]);
    }
    long long int max = 0;
    int count = 0;
    for (int i = 0; i < n; ++i) {
      if (arr[i] <= q) {
        count++;
      }
      if (arr[i] > q || i == n - 1) {
        if (count > k - 1) {
          long long int val = (count - (k - 1));
          max += (val * (val + 1)) / 2;
        }
        count = 0;
      }
    }
    printf("%lld\n", max);
  }
}
