#include <stdio.h>
#include <string.h>

int main() {
  char arr[19];
  scanf("%s", arr);
  int n = strlen(arr);
  for (int i = 0; i < n; ++i) {
    int curr = arr[i] - '0';
    if (curr > 4) {
      if (curr == 9 && i == 0) {
        continue;
      }
      curr = 9 - curr;
      arr[i] = curr + '0';
    }
  }
  printf("%s", arr);
  return 0;
}
