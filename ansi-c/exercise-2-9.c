#include <stdio.h>

int main(int argc, char *argv[])
{
  unsigned int x;
  scanf("%d",&x);
  int count = 0;
  while(x){
    count++;
    x &= x-1;
  }
  printf("%d\n",count);
  return 0;
}
