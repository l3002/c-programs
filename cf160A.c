#include <stdio.h>
#include <stdlib.h>

int compare(const void *, const void *);

int compare(const void *a, const void *b) { return (*(int *)b - *(int *)a); }

int main() {

  short int n;
  scanf("%hi", &n);
  int arr[n];
  int sum = 0;
  for (short i = 0; i < n; ++i) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  qsort(arr, n, sizeof(int), compare);
  int yourCoinCount = 0;
  int yourCoinSum = 0;
  while (yourCoinSum <= sum) {
    yourCoinSum += arr[yourCoinCount];
    sum -= arr[yourCoinCount];
    yourCoinCount++;
  }
  printf("%d\n", yourCoinCount);
  return 0;
}
