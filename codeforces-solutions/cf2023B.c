#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; ++i){
      if(i == 0){
        printf("1");
      }
      else{
        printf("0");
      }

    }
    printf("\n");
  }
  return 0;
}

