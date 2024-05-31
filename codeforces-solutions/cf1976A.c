#include <ctype.h>
#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    char arr[n + 1];
    scanf("%s", arr);
    char prev = '\0';
    int flag = 1;
    for (int i = 0; i < n; ++i) {
      char curr = arr[i];
      if (isdigit(curr) && isalpha(prev)) {
        flag = 0;
        break;
      } else if (isdigit(prev) && isdigit(curr) && (int)prev > (int)curr) {
        flag = 0;
        break;
      } else if (isalpha(prev) && isalpha(curr) && prev > curr) {
        flag = 0;
        break;
      }
      prev = arr[i];
    }
    if (flag) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
}
