#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

unsigned invert(unsigned x, int p, int n){
  unsigned masker = (~0u << (p+1)) | ~(~0u << (p+1-n));
  unsigned invertor = ~(x | masker);
  x &= masker;
  return x | invertor;
}

int main(){
  printf("%u\n",invert(23,3,2));
  return 0;
}
