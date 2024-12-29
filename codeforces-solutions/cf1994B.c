#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    char s[n+1];
    char t[n+1];
    scanf("%s",&s);
    scanf("%s",&t);
    int first = n;
    int flag = 1;
    for(int i=0; i<n; ++i){
      if(first == n && s[i] ==  '1'){
        first = i;
      }
      if(first == n && s[i] != t[i]){
        flag = 0;
        break;
      }
    }
    if(flag){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}

