#include <stdio.h>

/* copy input to output, replaces each string of one or
   more blanks by a single blank */
main() {
  int c, prev;

  while ((c = getchar()) != EOF) {
    if (c == ' ' && prev == c)
      ;
    else {
      putchar(c);
    }
    prev = c;
  }
}
