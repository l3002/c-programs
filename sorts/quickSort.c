/*
 * Author: l3002 <tanmaymathpal4545@gmail.com>
 *
 * Description: Implementation of Quick Sort Algorithm
 *
 */

#include <stdio.h>

int createPartition(int[], int, int);
void quickSort(int[], int, int);

int createPartition(int arr[], int startIndex, int endIndex) {

  int pivotIndex = startIndex - 1;

  while (startIndex < endIndex) {
    if (arr[startIndex] <= arr[pivotIndex] &&
        arr[endIndex] >= arr[pivotIndex]) {
      startIndex++;
      endIndex--;
    } else if (arr[startIndex] <= arr[pivotIndex] &&
               arr[endIndex] <= arr[pivotIndex]) {
      startIndex++;
    } else if (arr[startIndex] >= arr[pivotIndex] &&
               arr[endIndex] >= arr[pivotIndex]) {
      endIndex--;
    } else if (arr[startIndex] > arr[pivotIndex] &&
               arr[endIndex] < arr[pivotIndex]) {
      int temp = arr[startIndex];
      arr[startIndex] = arr[endIndex];
      arr[endIndex] = temp;
      startIndex++;
      endIndex--;
    }
  }

  if (startIndex == endIndex && arr[pivotIndex] > arr[startIndex]) {
    int temp = arr[pivotIndex];
    arr[pivotIndex] = arr[startIndex];
    arr[startIndex] = temp;
    return startIndex;
  } else {
    int temp = arr[pivotIndex];
    arr[pivotIndex] = arr[startIndex - 1];
    arr[startIndex - 1] = temp;
    return startIndex - 1;
  }
}

void quickSort(int arr[], int startIndex, int endIndex) {

  if (startIndex >= endIndex) {
    return;
  }

  int pivotPosition = createPartition(arr, startIndex + 1, endIndex);

  quickSort(arr, startIndex, pivotPosition - 1);
  quickSort(arr, pivotPosition + 1, endIndex);
}

int main() {
  int n;

  printf("Enter the number of elements: \n");
  scanf("%d", &n);

  int a[n];

  printf("Enter the elements seperated by spaces: \n");
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }

  quickSort(a, 0, n - 1);

  for (int i = 0; i < n; ++i) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}
