#include <stdio.h>
#include <string.h>

#define MAX 12

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    char s[MAX];
    scanf("%s",&s);
    char prev = '\0';
    int n = strlen(s);
    int flag = 1;
    char ans[MAX];
    int index = 0;
    for(int i=0; i<n; ++i){
      if(s[i] == prev && flag){
        ans[index] = (s[i] - 'a' + 1)%26 + 'a';
        flag = 0;
        index++;
      }
      prev = s[i];
      ans[index] = s[i];
      index++;
    }
    if(flag){
      ans[index] = (prev - 'a' + 1)%26 + 'a';
      index++;
    }
    ans[index] = '\0';
    printf("%s\n",ans);
  }
  return 0;
}
