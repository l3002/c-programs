#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; ++i) {
    scanf("%d", &arr[i]);
  }
  int best = arr[0];
  int worst = arr[0];
  int countAmazing = 0;
  for (int i = 1; i < n; ++i) {
    if (arr[i] > best) {
      countAmazing++;
      best = arr[i];
    }
    if (arr[i] < worst) {
      countAmazing++;
      worst = arr[i];
    }
  }
  printf("%d\n", countAmazing);
  return 0;
}
