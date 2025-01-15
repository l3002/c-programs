#include <signal.h>
#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    if(n < 5){
      printf("-1\n");
    }
    else{
      for(int i=1; i<=n; i+=2){
        if(i != 5){
          printf("%d ",i);
        }
      }
      printf("5 4 ");
      for(int i=2; i<=n; i+=2){
        if(i != 4){
          printf("%d ",i);
        }
      }
      printf("\n");
    }
  }
  return 0;
}

