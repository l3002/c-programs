#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int ai;
    int count = 0;
    for(int i=0; i<n; ++i){
      scanf("%d",&ai);
      if(ai < 0){
        count++;
      }
    }
    if(count == n){
      count = 0;
    }
    printf("%d\n",count);
  }
  return 0;
}

