#include <stdlib.h>

int main(){
  void *x = malloc(4);
  char *t = (char *) x;
  t += 2;
  free(t);
  return 0;
}
