#include <stdio.h>

#define MAX_LENGTH 10

main() {
  int c, l;

  int fword[MAX_LENGTH];
  while ((c = getchar()) != '1') {
    if (c == '\n' || c == ' ' || c == '\t') {
      fword[l]++;
      l = 0;
    } else {
      l++;
    }
  }
  for (int i = 1; i < MAX_LENGTH; ++i) {
    printf("%d ", i);
    for (int j = 0; j < fword[i]; ++j) {
      printf("-");
    }
    printf("\n");
  }
}
