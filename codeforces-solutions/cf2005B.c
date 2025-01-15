#include <math.h>
#include <stdio.h>

void merge(long long arr[], int l, int m, int r) {
  int i, j, k;
  int n1 = m - l + 1;
  int n2 = r - m;

  long long L[n1], R[n2];

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

void mergeSort(long long arr[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}

int binarySearch(long long arr[], int low, int high, long long x) {
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] < x) {
      if(arr[mid+1] > x){
        return mid;
      }
      low = mid + 1;
    }
    else {
      if(arr[mid-1] < x){
        return mid-1;
      }
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long n;
    int m, q;
    scanf("%lld %d %d", &n, &m, &q);
    long long r[m];
    long long dq;
    for (int i = 0; i < m; ++i) {
      scanf("%lld", &r[i]);
    }
    mergeSort(r, 0, m - 1);
    for (int i = 0; i < q; ++i) {
      scanf("%lld", &dq);
      if (dq > r[m - 1]) {
        printf("%lld\n", n - r[m - 1]);
      } else if (dq < r[0]) {
        printf("%lld\n", r[0] - 1);
      } else {
        int index = binarySearch(r, 1, m-1, dq);
        long long val = (long long)(ceil(((double)(r[index+1] - r[index] - 1))/2));
        printf("%lld\n",val);
      }
    }
  }
  return 0;
}
