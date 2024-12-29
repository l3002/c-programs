#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int sum;
    scanf("%d",&sum);
    int ai;
    for(int i=0; i<n-1; ++i){
      scanf("%d",&ai);
      if(i%2 == 0){
        sum -= ai;
      }
      else{
        sum += ai;
      }
    }
    printf("%d\n",sum);
  }
  return 0;
}

