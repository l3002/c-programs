#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n, x;
    scanf("%d %d",&n, &x);
    if(n%x == 0){
      for(int i=1; i<=n; ++i){
        if(i == 1){
          printf("%d ",x);
        }
        else if(i == n){
          printf("1\n");
        }
        else if(i == x){
          printf("%d ",n);
        }
        else{
          printf("%d ",i);
        }
      }
    }
    else{
      printf("-1\n");
    }
  }
  return 0;
}
