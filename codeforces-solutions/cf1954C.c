#include <stdio.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    char a[101];
    char b[101];
    scanf("%s", &a);
    scanf("%s", &b);
    int first = 1;
    int len = strlen(a);
    int max = 0;
    for (int i = 0; i < len; ++i) {
      if (a[i] != b[i]) {
        if (first) {
          if(a[i] < b[i]){
            max = 1;
          }
        } else if ((a[i] > b[i] && max == 0) || (a[i] < b[i] && max == 1)) {
          char x = b[i];
          b[i] = a[i];
          a[i] = x;
        }
        first = 0;
      }
    }
    printf("%s\n%s\n",a,b);
  }
  return 0;
}
