#include <stdio.h>

main() {
  int c;

  int prev;
  while ((c = getchar()) != EOF) {
    if ((c == ' ' || c == '\t' || c == '\n') &&
        (prev == ' ' || prev == '\t' || prev == '\n'))
      ;
    else if (c == ' ' || c == '\t') {
      putchar('\n');
    } else {
      putchar(c);
    }
  }
}
