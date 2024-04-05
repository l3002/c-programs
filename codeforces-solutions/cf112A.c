#include <ctype.h>
#include <stdio.h>

#define MAX 100

int main() {
  char arr[MAX];
  char arr1[MAX];
  scanf("%s", &arr);
  scanf("%s", &arr1);
  int i = 0;
  int flag = 0;
  while (arr[i] != '\0') {
    if (tolower(arr[i]) < tolower(arr1[i])) {
      printf("-1\n");
      flag = 1;
      break;
    } else if (tolower(arr[i]) > tolower(arr1[i])) {
      printf("1\n");
      flag = 1;
      break;
    }
    i++;
  }
  if (flag == 0) {
    printf("0\n");
  }
  return 0;
}
