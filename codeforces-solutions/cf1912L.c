
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  char arr[n];
  scanf("%s", &arr);
  int countL = 0;
  int countO = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] == 'L') {
      countL++;
    } else {
      countO++;
    }
  }
  int countL1 = 0;
  int countO1 = 0;
  int k = -1;
  for (int i = 0; i < n - 1; ++i) {
    if (arr[i] == 'L') {
      countL--;
      countL1++;
    } else {
      countO--;
      countO1++;
    }
    if (countL != countL1 && countO != countO1) {
      k = i + 1;
      break;
    }
  }
  printf("%d\n", k);
  return 0;
}
