#include <stdio.h>

#define MAX_SIZE 201

int main() {
  char string[MAX_SIZE];
  scanf("%s", &string);
  char outstr[MAX_SIZE];
  int i = 0;
  int n = 0;
  while (string[i] != '\0') {
    n++;
    i++;
  }
  i = 0;
  int j = 0;
  while (string[i] != '\0') {
    if (i < (n - 2) && string[i] == 'W' && string[i + 1] == 'U' &&
        string[i + 2] == 'B') {
      outstr[j] = ' ';
      i += 3;
      j++;
      continue;
    }
    outstr[j] = string[i];
    i++;
    j++;
  }
  outstr[j] = '\0';
  i = 0;
  char prev = string[i];
  while (outstr[i] != '\0') {
    if ((prev == ' ' || i == 0 || i == n - 1) && outstr[i] == ' ') {
      i++;
      continue;
    }
    printf("%c", outstr[i]);
    prev = outstr[i];
    i++;
  }
  printf("\n");
  return 0;
}
