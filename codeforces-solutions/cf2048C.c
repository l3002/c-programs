#include <stdio.h>
#include <string.h>

#define MAX 5001

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    char s[MAX];
    char x[MAX];
    int index = 0;
    scanf("%s",&s);
    int n = strlen(s);
    int found = 0;
    for(int i=0; i<n; ++i){
      if(s[i] == '0' && !found){
        found = i;
      }
      if(found){
        if(s[i] == '1'){
          x[index] = '0';
        }
        else{
          x[index] = '1';
        }
        index++;
      }
    }
    x[index] = '\0';
    int ans = 0;
    int maxcount = 0;
    for(int i=0; i < n-index; ++i){
      if(s[i] == '1'){
        int count = 0;
        for(int j=0; j<index; ++j){
          if(x[j] == s[i+j]){
            count++;
          }
          else{
            break;
          }
        }
        if(count > maxcount){
          ans = i;
          maxcount = count;
        }
      }
    }
    if(found){
      printf("1 %d %d %d\n", n, ans + 1, ans + index);
    }
    else{
      printf("1 %d 1 1\n",n);
    }
  }
  return 0;
}

