#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) { return (*(int *)b - *(int *)a); }

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, f, k;
    scanf("%d %d %d", &n, &f, &k);
    int arr[n];
    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
    }
    int val = arr[f - 1];
    int count = 0;
    for (int i = 0; i < n; ++i) {
      if (arr[i] == val) {
        count++;
      }
    }
    qsort(arr, n, sizeof(int), cmpfunc);
    if (arr[k - 1] > val) {
      printf("NO\n");
    } else if (arr[k - 1] == val && count > 1 && k < n && arr[k] == val) {
      printf("MAYBE\n");
    } else {
      printf("YES\n");
    }
  }
  return 0;
}
