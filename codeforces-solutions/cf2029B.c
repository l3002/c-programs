#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    char arr[n+1];
    char op[n];
    scanf("%s",&arr);
    scanf("%s",&op);
    int count1 = 0;
    int count0 = 0;
    for(int i=0; i<n; ++i){
      if(arr[i] == '1'){
        count1++;
      }
      else{
        count0++;
      }
    }
    int flag = 0;
    for(int i=0; i<n-1; ++i){
      if(count1 <= 0 || count0 <= 0){
        flag = 1;
        break;
      }
      count1--;
      count0--;
      if(op[i] == '1'){
        count1++;
      }
      else{
        count0++;
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

