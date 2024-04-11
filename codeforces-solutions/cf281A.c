#include <ctype.h>
#include <stdio.h>

#define MAX 1000

int main() {
  char str[MAX];
  scanf("%s", &str);
  str[0] = toupper(str[0]);
  printf("%s\n", str);
  return 0;
}
