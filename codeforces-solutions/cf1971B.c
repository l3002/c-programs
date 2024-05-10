#include <stdio.h>
#include <string.h>
#define MAX 11

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    char arr[MAX];
    scanf("%s", arr);
    char firstChar = arr[0];
    int flag = 0;
    int n = strlen(arr);
    for (int i = 1; i < n; ++i) {
      if (firstChar != arr[i]) {
        flag = 1;
        arr[0] = arr[i];
        arr[i] = firstChar;
        break;
      }
    }
    if (flag) {
      printf("YES\n");
      printf("%s\n", arr);
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
