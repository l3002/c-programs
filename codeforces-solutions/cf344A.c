#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int a = 1;
  char prev[3];
  scanf("%s", &prev);
  char arr[3];
  for (int i = 1; i < n; ++i) {
    scanf("%s", &arr);
    if (arr[0] == prev[1]) {
      a++;
    }
    prev[0] = arr[0];
    prev[1] = arr[1];
  }
  printf("%d\n", a);
  return 0;
}
