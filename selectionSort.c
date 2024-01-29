/*
 * Author: l3002 <tanmaymathpal4545@gmail.com>
 *
 * Description: Implementation of Selection Sort
 *
 */

#include <stdio.h>

int main() {

  int n; // number of elements in the array

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int a[n]; // array to store the list of elements

  printf("Enter the elements with the space as seperator: ");
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < n - 1; ++i) {

    int minIndex = i; // to store smallest element's index

    for (int j = i + 1; j < n; ++j) {

      // search smallest element's index between i + 1 to end of the list
      if (a[minIndex] > a[j]) {
        minIndex = j;
      }
    }

    // swap smallest element's index with i
    int temp = a[i];
    a[i] = a[minIndex];
    a[minIndex] = temp;
  }

  for (int i = 0; i < n; ++i) { // to print sorted array
    printf("%d ", a[i]);
  }

  printf("\n"); // to print next line character after execution

  return 0;
}
