#include <stdio.h>
#include <string.h>

#define MAX 200001

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    char s[MAX];
    char t[MAX];
    scanf("%s",&s);
    scanf("%s",&t);
    int ns = strlen(s);
    int nt = strlen(t);
    int index = 0;
    for(int i=0; i<ns; ++i){
      if(index == nt && s[i] == '?'){
        s[i] = 'a';
      }
      else if(s[i] == t[index] || s[i] == '?'){
        s[i] = t[index];
        index++;
      }
    }
    if(index == nt){
      printf("YES\n");
      printf("%s\n",s);
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
