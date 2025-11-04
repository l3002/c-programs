#include <stdio.h>

int main(){
  int t = 1500;
  unsigned char *x = &t;
  int nbytes = sizeof(int)/sizeof(unsigned char);
  for(int i=0; i<nbytes; ++i){
    printf("byte %d hex - %hhx\n", i, *(x+i));
  }
  return 0;
}
