#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    char arr[6];
    scanf("%s", &arr);
    char hr[3];
    hr[0] = arr[0];
    hr[1] = arr[1];
    hr[2] = '\0';
    int hrInt;
    sscanf(hr, "%d", &hrInt);
    if (hrInt == 0) {
      printf("12:%c%c", arr[3], arr[4]);
    } else if (hrInt < 13) {
      printf("%s", arr);
    } else if (hrInt - 12 < 10) {
      printf("0%d:%c%c", (hrInt - 12), arr[3], arr[4]);
    } else {
      printf("%d:%c%c", (hrInt - 12), arr[3], arr[4]);
    }
    if (hrInt < 12) {
      printf(" AM\n");
    } else {
      printf(" PM\n");
    }
  }
  return 0;
}
