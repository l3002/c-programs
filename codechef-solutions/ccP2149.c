#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int a,b,x;
    scanf("%d %d %d",&a,&b,&x);
    if(a <= x && b <= x){
      printf("0\n");
    }
    else if(a <= x && b > x){
      printf("%d\n", 1);
    }
    else if(a > x && b <= x){
      printf("%d\n", 1);
    }
    else if(a > x && b > x){
      printf("%d\n",2);
    }
  }
  return 0;
}

