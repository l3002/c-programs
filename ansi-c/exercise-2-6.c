#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

unsigned setbits(unsigned x, int p, int n, unsigned y){
  unsigned masker = (~0u << (p+1)) | ~(~0u << (p+1-n));
  x = x & masker;
  y = y & ~masker;
  return x | y;
}

int main(){
  printf("%u\n",setbits(23,3,1,26));
  return 0;
}
