/*
 *
 * Author : l3002 <tanmaymathpal4545@gmail.com>
 *
 * Description : Implementation for Merge Sort
 *
 */

#include <stdio.h>

void merge(int[], int, int, int);
void mergeSort(int[], int, int);

void merge(int arr[], int start, int end, int mid) {
  while (start < mid && mid < end) {
    if (arr[start] <= arr[mid]) {
      start++;
    } else {
      int temp = arr[mid];
      for (int i = mid - 1; i >= start; --i) {
        arr[i + 1] = arr[i];
      }
      arr[start] = temp;
      start++;
      mid++;
    }
  }
}

void mergeSort(int arr[], int start, int end) {

  if (end - start == 1 || end - start == 0) {
    return;
  }

  int mid = (end - start) / 2;
  mergeSort(arr, start, start + mid);
  mergeSort(arr, start + mid, end);
  merge(arr, start, end, start + mid);
}

int main() {

  int n;

  printf("Enter the number of elements:\n");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the elements with space as seperator:\n");
  for (int i = 0; i < n; ++i) {
    scanf("%d", &arr[i]);
  }

  mergeSort(arr, 0, n);

  for (int i = 0; i < n; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
