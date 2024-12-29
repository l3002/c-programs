#include <stdio.h>

int main(){
  printf("1\n");
  printf("200000\n");
  for(int i=1; i<200000; ++i){
    printf("1 %d\n",i+1);
  }
  printf("1\n");
  printf("1 1\n");
  return 0;
}
