#include <stdio.h>
#include <string.h>
#define MAX 501

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    char s[MAX];
    scanf("%s", &s);
    int n = strlen(s);
    char prev = s[0];
    int count = 1;
    int flag = 0;
    for (int i = 1; i < n; ++i) {
      if (prev == '0' && s[i] == '1') {
        if (flag) {
          count++;
        }
        flag = 1;
      }
      if (prev == '1' && s[i] == '0') {
        count++;
      }
      prev = s[i];
    }
    printf("%d\n", count);
  }
}
