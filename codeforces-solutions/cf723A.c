#include <stdio.h>

int main() {
  int arr[3];
  scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
  int min = arr[0];
  int max = arr[2];
  for (int i = 0; i < 3; ++i) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  int dis = max - min;
  printf("%d", dis);
  return 0;
}
