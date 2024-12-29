#include <stdio.h>

void merge(int arr[], int l, int m, int r) {
  int i, j, k;
  int n1 = m - l + 1;
  int n2 = r - m;

  int L[n1], R[n2];

  for (i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for (j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];

  i = 0;
  j = 0;
  k = l;
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, k, x;
    scanf("%d %d %d", &n, &k, &x);
    int arr[n];
    long long sums = 0;
    long long sum = 0;
    long long s[n];
    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
      sum += arr[i];
    }
    sums = sum;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; ++i) {
      s[i] = sums;
      sums -= arr[i];
    }
    long long maxSum = -sum;
    for (int i = 1; i <= k; ++i) {
      int nx = n-i-x;
      if(nx<0){
        nx = 0;
      }
      long long val = sum - 2*(s[nx] - s[n-i]) - s[n-i];
      if (val > maxSum) {
        maxSum = val;
      }
    }
    int baseCase = sum - 2*(s[n-x]);
    if(baseCase > maxSum){
      maxSum = baseCase;
    }
    printf("%lld\n", maxSum);
  }
  return 0;
}
