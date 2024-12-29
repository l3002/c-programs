#include <stdio.h>
#include <string.h>

#define MAX 101

int main(int argc, char *argv[])
{
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    char str[MAX];
    scanf("%s",&str);
    int canR0 = 1;
    int last0 = -1;
    int last1 = -1;
    int canR1 = 1;
    int n = strlen(str);
    for(int i=0; i<n; ++i){
      
    }
    if(canR1 || canR0){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
