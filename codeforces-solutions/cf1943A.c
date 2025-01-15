#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);

    int ai;
    int count[n];

    for(int i=0; i<n; ++i){
      count[i] = -1;
    }

    for(int i=0; i<n; ++i){
      scanf("%d",&ai);
      if(count[ai] == -1){
        count[ai] = 0;
      }
      count[ai]++;
    }

    int ans = n;
    int ff = 0;
    for(int i=0; i<n; ++i){
      if(count[i] == -1 || (ff && count[i] == 1)){
        ans = i;
        break;
      }
      else if(count[i] == 1){
        ff = 1;
      }
    }

    printf("%d\n",ans);
  }
  return 0;
}

