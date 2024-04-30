#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    long long int arr1[n];
    for (int i = 0; i < n; ++i) {
      scanf("%lld", &arr1[i]);
    }
    long long int arr2[n];
    int j = 0;
    int count = 0;
    for (int i = 0; i < n; ++i) {
      scanf("%lld", &arr2[i]);
      if (arr2[i] < arr1[j]) {
        count++;
      } else {
        j++;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}
