#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n,k;
    scanf("%d %d",&n,&k);
    if(n == 1){
      printf("1\n");
      printf("1\n");
    }
    else if(n > 1 & k%2 == 0 && k != 1 && k!=n){
      printf("3\n");
      printf("1 %d %d\n",k,k+1);
    }
    else if(n > 1 && k > 2 && k < n-1 && k%2 != 0){
      printf("3\n");
      printf("1 %d %d\n",k-1,k+2);
    }
    else{
      printf("-1\n");
    }
  }
  return 0;
}

