#include <stdio.h>

void merge(long long arr[], int l, int m, int r)
{
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
        }
        else {
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

void mergeSort(long long arr[], int l, int r)
{
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
    int n, c, d;
    scanf("%d %d %d", &n, &c, &d);
    long long arr[n * n];
    for (int i = 0; i < n * n; ++i) {
      scanf("%lld", &arr[i]);
    }
    mergeSort(arr, 0, n*n - 1);
    long long min = arr[0];
    long long prevMin = min;
    long long arr2[n * n];
    for (int i = 0; i < n * n; ++i) {
      if (i % n == 0) {
        arr2[i] = min;
        prevMin = min;
        min += d;
        continue;
      }
      arr2[i] = prevMin + (i % n) * c;
    }
    mergeSort(arr2, 0, n*n - 1);
    int flag = 1;
    for (int i = 0; i < n * n; ++i) {
      if (arr[i] != arr2[i]) {
        flag = 0;
        break;
      }
    }
    if (flag == 0) {
      printf("NO\n");
    } else {
      printf("YES\n");
    }
  }
  return 0;
}
