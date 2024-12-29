#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    char arr[n+1];
    scanf("%s",&arr);
    int in[n];
    int len = 0;
    long long score = 0;
    for(int i=0; i<n; ++i){
      if(arr[i] == '(' || (arr[i] == '_' && len == 0)){
        in[len] = i;
        len++;
      }
      else if(arr[i] == ')' || (arr[i] == '_' && len > 0)){
        score += i - in[len-1];
        len--;
      }
    }
    printf("%lld\n",score);
  }
  return 0;
}
