#include <stdio.h>

#define MAX_LENGTH 10000

int getLine(char s[], int lim);

main() {
  int len, ln, tlen;
  char s[MAX_LENGTH];

  ln = 1;
  tlen = 0;
  while ((len = getLine(s, MAX_LENGTH)) > 0) {
    printf("Line %d has a length of %d characters\n", ln, len);
    ++ln;
    tlen += len;
  }
  printf("Length of the text is %d\n", tlen);
  return 0;
}

int getLine(char s[], int lim) {
  int l, c;

  for (l = 0; (l < lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++l) {
    s[l] = c;
  }
  if (c == '\n') {
    s[l] = '\n';
    ++l;
  }

  s[l] = '\0';

  return l;
}
