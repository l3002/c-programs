#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    if(n != 1 && n%2 != 0){
      printf("-1\n");
    }
    else{
      if(n != 1){
        printf("%d ",n);
      }
      for(int i=n-1,j=2;i>1 && j<n;i-=2,j+=2){
        printf("%d %d ",i,j);
      }
      printf("1\n");
    }
  }
  return 0;
}

