#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    if(n == 1 || n == 3){
      printf("-1\n");
    }
    else{
      for(int i=0; i<n; ++i){
        if(n%2 == 0 && i < n-2 || n%2 != 0 && i < n-4){
          printf("3");
        }
        else if(n%2 != 0 && i == n-3){
          printf("3");
        }
        else if(n%2 != 0 && i == n-4){
          printf("6");
        }
        else{
          printf("6");
        }
      }
      printf("\n");
    }
  }
  return 0;
}

