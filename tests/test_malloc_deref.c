#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  int t = 100;
  char a = 'a';
  void *ptr = malloc(5UL);
  int *int_ptr = (int *) ptr;
  *int_ptr = t;
  char *char_ptr = (char *)(int_ptr + 1);
  *char_ptr = a;

  printf("%d %c\n", *((int*)ptr), *((char *)((int*)ptr+1)));

  return 0;
}
