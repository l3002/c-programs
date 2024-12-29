#include <stdio.h>
#include <string.h>

#define MAX 200001

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    char arr[MAX];
    scanf("%s", &arr);
    int n = strlen(arr);
    char ref[] = "1100";
    int count = 0;
    for (int i = 0; i < n - 3; ++i) {
      int x = 1;
      for (int j = 0; j < 4 && x; ++j) {
        if (arr[i + j] == ref[j]) {
          x &= 1;
        } else {
          x &= 0;
        }
      }
      if (x == 1) {
        count++;
      }
    }
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; ++i) {
      int qi;
      char c;
      scanf("%d %c", &qi, &c);
      if (arr[qi - 1] != c) {
        for (int j = qi - 1 < 3 ? 0 : qi - 1 - 3; j + 3 < n && j < qi; ++j) {
          int x = 1;
          int y = 1;
          for (int k = 0; k < 4; ++k) {
            if (arr[j + k] == ref[k]) {
              x &= 1;
            } else {
              x &= 0;
            }
            arr[qi - 1] = c;

            if (arr[j + k] == ref[k]) {
              y &= 1;
            } else {
              y &= 0;
            }

            if (arr[qi - 1] == '1') {
              arr[qi - 1] = '0';
            } else {
              arr[qi - 1] = '1';
            }
          }
          count = count - x + y;
        }
        arr[qi - 1] = c;
      }
      if (count > 0) {
        printf("YES\n");
      } else {
        printf("NO\n");
      }
    }
  }
  return 0;
}
