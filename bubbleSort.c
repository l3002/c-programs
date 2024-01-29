/*
 * Author : l3002 <tanmaymathpal4545@gmail.com>
 *
 * Description : Implementation of Bubble Sort Algorithm
 *
 */

#include <stdio.h>

int main() {

  int n; // number of elements in the array

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int a[n]; // array to store the list

  printf("Enter the elements in the list with space seperator: ");
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < n - 1; ++i) {

    for (int j = 0; j < n - 1; ++j) {

      if (a[j] > a[j + 1]) { // if current element is greater than next element
                             // then swap

        // swapping algorithm

        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < n; ++i) { // print sorted array

    printf("%d ", a[i]);
  }

  printf("\n"); // print a new line character

  return 0;
}
