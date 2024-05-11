#include <stdio.h>

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  int arr[n];
  int count = 0;
  int max = 1;
  for (int i = 0; i < n; ++i) {
    scanf("%d", &arr[i]);
    if (count + arr[i] > k) {
      count = arr[i];
      max++;
    } else {
      count += arr[i];
    }
  }
  printf("%d", max);
  return 0;
}
