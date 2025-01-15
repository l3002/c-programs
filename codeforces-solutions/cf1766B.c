#include <stdio.h>
#include <string.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",&s);
    char arr[n-1][3];
    for(int i=0; i<n-1; ++i){
      arr[i][0] = s[i];
      arr[i][1] = s[i+1];
      arr[i][2] = '\0';
    }
    int flag = 1;
    for(int i=2; i<n-1 && flag; ++i){
      for(int j=0; j<i-1; ++j){
        if(strcmp(arr[i], arr[j]) == 0){
          flag = 0;
          break;
        }
      }
    }
    if(flag){
      printf("NO\n");
    }
    else{
      printf("YES\n");
    }
  }
  return 0;
}

