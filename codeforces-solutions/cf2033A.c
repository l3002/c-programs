#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int x = 0;
    int c = 1;
    while((int)abs(x) < n){
      if(c%2 == 0){
        x += 2*c - 1;
      }
      else{
        x -= 2*c - 1;
      }
      c++;
    }
    if(c%2 == 0){
      printf("Kosuke\n");
    }
    else{
      printf("Sakurako\n");
    }
  }
  return 0;
}

