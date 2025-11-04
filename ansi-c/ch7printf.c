#include <stdio.h>

int main(){
  int x = 42;
  int *y = &x;
  printf("x = %d, y = %p\n",x,y);
  return 0;
}

