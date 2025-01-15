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
    char bw[n+1];
    scanf("%s",&bw);
    int ans[n];
    int check[n];
    for(int i=0; i<n; ++i){
      check[i] = 1;
    }
    for(int i=0; i<n; ++i){
      if(check[i] == 1){
        int count = 0;
        int c = arr[i];
        while(c-1 != i){
          if(bw[c-1] == '0'){
            count++;
          }
          check[c-1] = 0;
          c = arr[c-1];
        }
        if(bw[i] == '0'){
          count++;
        }
        ans[i] = count;
        c = arr[i];
        while(c-1 != i){
          ans[c-1] = count;
          c = arr[c-1];
        }
      }
    }
    for(int i=0; i<n; ++i){
      printf("%d ",ans[i]);
    }
    printf("\n");
  }
  return 0;
}

