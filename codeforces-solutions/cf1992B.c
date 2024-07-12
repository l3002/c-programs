#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    long long int arr[k];
    long long int max = 0;
    for (long long i = 0; i < k; ++i) {
      scanf("%lld", &arr[i]);
      if (max < arr[i]) {
        max = arr[i];
      }
    }
    int flag = 1;
    long long int ans = 0;
    for (int i = 0; i < k; ++i) {
      if (arr[i] == max && flag) {
        flag = 0;
      } else {
        ans += 2 * arr[i] - 1;
      }
    }
    printf("%lld\n", ans);
  }
  return 0;
}
