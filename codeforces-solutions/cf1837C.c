#include <stdio.h>
#include <string.h>

#define MAX 300001

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    char arr[MAX];
    scanf("%s", &arr);
    char last = '0';
    int n = strlen(arr);
    for (int i = 0; i < n; ++i) {
      if (arr[i] == '?') {
        arr[i] = last;
      }
      last = arr[i];
    }
    printf("%s\n", arr);
  }
  return 0;
}
