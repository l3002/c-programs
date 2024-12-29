#include <stdio.h>

int main(int argc, char *argv[])
{
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int xc,yc,k;
    scanf("%d %d %d",&xc,&yc,&k);
    for(int i=1; i <= k/2; ++i){
      if(k%2 != 0 && i == k/2){
        break;
      }
      printf("%d %d\n", xc, yc + i);
      printf("%d %d\n",xc,yc - i);
    }
    if(k == 1){
      printf("%d %d\n",xc,yc);
    }
    else if(k%2 != 0){
      printf("%d %d\n", xc,yc + k/2);
      printf("%d %d\n", xc,yc + k/2 + 1);
      printf("%d %d\n", xc,yc - k);
    }
  }
  return 0;
}
