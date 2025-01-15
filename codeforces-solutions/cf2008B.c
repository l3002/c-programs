#include <stdio.h>
#include <math.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    char arr[n+1];
    scanf("%s",&arr);
    int sqt = sqrt(n);
    if(sqt*sqt == n){
      int t[sqt][sqt];
      for(int i=0; i<n; ++i){
        t[i/sqt][i%sqt] = arr[i];
      }
      int flag = 1;
      for(int i=0; i<sqt; ++i){
        for(int j=0; j<sqt; ++j){
          if((i == 0 || i == sqt-1) && t[i][j] == '0'){
            flag = 0;
            break;
          }
          else if(i > 0 && i<sqt-1 && (j==0 || j==sqt-1) && t[i][j] == '0'){
            flag = 0;
            break;
          }
          else if(i > 0 && i<sqt-1 && (j > 0 && j < sqt-1) && t[i][j] == '1'){
            flag = 0;
            break;
          }
        }
      }
      if(flag){
        printf("Yes\n");
      }
      else{
        printf("No\n");
      }
    }
    else{
      printf("No\n");
    }
  }
  return 0;
}

