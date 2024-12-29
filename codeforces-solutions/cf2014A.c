#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n,k;
    scanf("%d %d",&n,&k);
    int ai;
    int count = 0;
    int gold = 0;
    for(int i=0; i<n; ++i){
      scanf("%d",&ai);
      if(ai != 0 && ai >= k){
        gold += ai;
      }
      else if(ai == 0 && gold > 0){
        count++;
        gold--;
      }
    }
    printf("%d\n",count);
  }
  return 0;
}

