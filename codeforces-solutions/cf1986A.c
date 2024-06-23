#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    qsort(arr, 3, sizeof(int), compare);
    printf("%d\n", ((arr[1] - arr[0]) + (arr[2] - arr[1])));
  }
  return 0;
}
