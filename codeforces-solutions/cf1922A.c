#include <stdbool.h>
#include <stdio.h>

int main() {
  int t, n;
  scanf("%d", &t);
  while (t-- > 0) {
    scanf("%d", &n);
    char a[n + 1], b[n + 1], c[n + 1];
    scanf("%s", &a);
    scanf("%s", &b);
    scanf("%s", &c);
    bool flag = false;
    for (int i = 0; i < n; ++i) {
      if (!(a[i] == c[i] || b[i] == c[i])) {
        flag = true;
        break;
      }
    }
    if (flag) {
      printf("Yes");
    } else {
      printf("No");
    }
  }
  return 0;
}
