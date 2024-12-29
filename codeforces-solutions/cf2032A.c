#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int count1 = 0;
    int ai;
    for(int i=0; i<2*n; ++i){
      scanf("%d",&ai);
      if(ai == 1){
        count1++;
      }
    }
    printf("%d ",count1%2);
    if(count1 <= n){
      printf("%d\n",count1);
    }
    else{
      printf("%d\n",2*n - count1);
    }
  }
  return 0;
}

