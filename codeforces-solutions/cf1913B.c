#include <stdio.h>
#include <string.h>

#define MAX 200001

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    char arr[MAX];
    scanf("%s",&arr);
    int n = strlen(arr);
    int count1 = 0;
    for(int i=0; i<n; ++i){
      if(arr[i] == '1'){
        count1++;
      }
    }
    if(count1 == n - count1){
      printf("0\n");
    }
    else{
      int x = count1;
      int y = n - count1;
      int ans = 0;
      for(int i=n-1; i>=0; --i){
        if(arr[i] == '1'){
          x--;
        }
        else{
          y--;
        }
        if(x <= n - count1 && y <= count1){
          ans = n-i;
          break;
        }
      }
      printf("%d\n",ans);
    }
  }
  return 0;
}

