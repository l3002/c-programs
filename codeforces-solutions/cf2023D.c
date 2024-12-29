#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n,q;
    scanf("%d %d",&n, &q);
    int f = 1;
    int first = 0;
    int last = 1;
    int arr[n];
    for(int i=0; i<n; ++i){
      scanf("%d",&arr[i]);
      if(i+1 != arr[i]){
        if(f){
          first = i;
          f = 0;
        }
        last = i;
      }
    }
    
  }
  return 0;
}

