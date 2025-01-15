#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; ++i){
      scanf("%d",&arr[i]);
    }
    int flag = 1;
    int flag1 = 1;
    int ai;
    for(int i=0,j=n-1; i<n && j>=0; ++i,--j){
      scanf("%d",&ai);
      if(arr[i] != ai){
        flag = 0;
      }
      if(arr[j] != ai){
        flag1 = 0;
      }
    }
    if(flag || flag1){
      printf("Bob\n");
    }
    else{
      printf("Alice\n");
    }
  }
  return 0;
}
