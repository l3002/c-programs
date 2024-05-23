#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", &str);
    int check[26];
    for (int i = 0; i < 26; ++i) {
      check[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
      int index = ((int)str[i]) - ((int)'a');
      check[index] = 1;
    }
    char alp[27];
    int index = 0;
    for (int i = 0; i < 26; ++i) {
      if (check[i]) {
        alp[index] = (char)(i + ((int)'a'));
        index++;
      }
    }
    alp[index] = '\0';
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < index; ++j) {
        if (str[i] == alp[j]) {
          str[i] = alp[(index - 1) - j];
          break;
        }
      }
    }
    printf("%s\n", str);
  }
  return 0;
}
