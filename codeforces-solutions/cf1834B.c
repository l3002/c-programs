#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 101

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    char a[MAX];
    char b[MAX];
    scanf("%s %s", &a, &b);
    int lena = strlen(a);
    int lenb = strlen(b);
    int sum = 0;
    if (lena == lenb) {
      int index = 0;
      for (int i = 0; i < lena; ++i) {
        int ai = a[i] - '0';
        int bi = b[i] - '0';
        index = i;
        if (ai != bi) {
          sum += abs(ai - bi);
          break;
        }
      }
      if (index != lena) {
        ++index;
      }
      sum += (lena - index) * 9;
    } else if (lena > lenb) {
      sum += a[0] - '0';
      sum += (lena - 1) * 9;
    } else {
      sum += b[0] - '0';
      sum += (lenb - 1) * 9;
    }
    printf("%d\n", sum);
  }
  return 0;
}
