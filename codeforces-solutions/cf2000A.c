#include <stdio.h>
#include <string.h>

#define MAX 10001

int main(){
    int n;
    scanf("%d",&n);
    char str[MAX];
    for(int i=0; i<n; ++i){
      scanf("%s",&str);
      if((strlen(str) >= 3 && str[0] == '1' && str[1] == '0' && str[2] >= '2') ||
      (strlen(str) >= 4 && str[0] == '1' && str[1] == '0' && str[2] >= '1')){
        printf("YES\n");
      }
      else {
        printf("NO\n");
      }
    }
  return 0;
}
