#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n,k;
    scanf("%d %d",&n,&k);
    int min = k;
    int c1 = 0;
    int c2 = 0;
    for(int i=0; i<n; ++i){
      int ai;
      scanf("%d",&ai);
      if(min > (k-(ai%k))){
        min = k-(ai%k);
      }
      if(ai%k == 0){
        min = 0;
      }
      if(ai%2 == 1){
        c1++;
      }
      if(ai%2 == 0){
        c2++;
      }
    }
    if(k == 4 && c2 >= 2 && min > 0){
      min = 0;
    }
    else if(k == 4 && c2 == 1 && c1 >= 1 && min > 1){
      min = 1;
    }
    else if(k == 4 && c2 == 0 && c1 >= 2 && min > 2){
      min = 2;
    }

    printf("%d\n",min);
  }
  return 0;
}
