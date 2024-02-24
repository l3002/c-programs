#include <stdio.h>

int main() {
  int t, n;
  char arr[] = "abcdefghijklmnopqrstuvwxyz";
  scanf("%d", &t);
  while (t-- > 0) {
    scanf("%d", &n);
    if (n <= 28) {
      printf("aa%c\n", arr[n - 3]);
    } else if (n > 52) {
      printf("%czz\n", arr[n - 53]);
    } else {
      printf("a%cz\n", arr[n - 28]);
    }
  }
  return 0;
}
