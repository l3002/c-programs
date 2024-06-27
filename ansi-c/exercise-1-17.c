#include <stdio.h>

#define MAX_LENGTH 10000
#define THRESHOLD_LENGTH 80

int getLine(char s[], int lim);

main() {
  int len;
  char s[MAX_LENGTH];

  while ((len = getLine(s, MAX_LENGTH)) > 0) {
    if (len > THRESHOLD_LENGTH) {
      printf("%s\n", s);
    }
  }

  return 0;
}

int getLine(char s[], int lim) {
  int c, l;

  for (l = 0; l < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++l) {
    s[l] = c;
  }

  if (c == '\n') {
    s[l] = c;
    ++l;
  }

  s[l] = '\0';

  return l;
}
