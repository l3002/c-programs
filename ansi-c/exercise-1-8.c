#include <stdio.h>

/* counts number of blanks, tabs, and newlines */
main() {
  int bc, tc, nc;

  int c;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++nc;
    }
    if (c == '\b') {
      ++bc;
    }
    if (c == '\t') {
      ++tc;
    }
  }
  printf("number of lines %3d\nnumber of backspaces %3d\n number of tabs %3d\n",
         nc, bc, tc);
}
