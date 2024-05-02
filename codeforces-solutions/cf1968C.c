#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    long long int arr[n - 1];
    for (int i = 0; i < n - 1; ++i) {
      scanf("%lld", &arr[i]);
    }
    long long int a2[n];
    a2[0] = arr[0] + 1;
    a2[1] = arr[0];
    for (int i = 1; i < n - 1; ++i) {
      if (arr[i] < a2[i]) {
        a2[i + 1] = arr[i] + a2[i];
      } else {
        int factor = (arr[i] / a2[i - 1]) + 1;
        a2[i] = (factor * (a2[i - 1])) + arr[i - 1];
        a2[i + 1] = arr[i];
      }
    }
    for (int i = 0; i < n; ++i) {
      printf("%lld ", a2[i]);
    }
    printf("\n");
  }
}
