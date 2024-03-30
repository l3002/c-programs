/*
 *
 * Author : l3002 <tanmaymathpal4545@gmail.com>
 *
 * Description : Insertion sort Algorithm Implementation
 *
 */

#include <stdio.h>

int main() {

  int n; // number of elements in array

  printf("Enter number of elements: ");
  scanf("%d", &n);

  printf("Enter the elements with space as a seperator: ");
  int a[n]; // int array to contain the list

  for (int i = 0; i < n; ++i) {

    scanf("%d", &a[i]);
  }

  for (int i = 1; i < n; ++i) {

    for (int j = i - 1; j >= 0; --j) {

      if (a[j] <= a[j + 1]) { /* if prev value is smaller than or equal to
                               * current then break out of loop */
        break;
      }

      // swap algorithm
      int temp = a[j];
      a[j] = a[j + 1];
      a[j + 1] = temp;
    }
  }

  for (int i = 0; i < n; ++i) { // print sorted array

    printf("%d ", a[i]);
  }

  printf("\n"); // print new line character at the end

  return 0;
}
