#include <stdio.h>
#include <string.h>

#define MAX 101

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    char a[MAX], b[MAX];
    scanf("%s", &a);
    scanf("%s", &b);
    int first = strlen(b);
    int second = strlen(b) - 1;
    int min = 201;
    for (int i = 0; i < strlen(b); ++i) {
      int flag = 1;
      int index = i;
      int len;
      for (int j = 0; j < strlen(a); ++j) {
        if (b[index] == a[j]) {
          if (flag) {
            first = index;
            flag = 0;
          }
          second = index;
          index++;
        }
        len = strlen(a) + first + (strlen(b) - (second + 1));
      }
      if (min > len) {
        min = len;
      }
    }
    printf("%d\n", min);
  }

  return 0;
}
