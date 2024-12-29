#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int a,b;
    scanf("%d %d", &a,&b);
    if(a%2 == 0 && (b%2)*2 <= a){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}

