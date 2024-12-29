#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    char arr[n+1];
    scanf("%s",&arr);
    if(arr[0] == arr[n-1]){
      printf("NO\n");
    }
    else{
      printf("YES\n");
    }
  }
  return 0;
}

