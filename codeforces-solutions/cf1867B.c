#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",&str);
    int count = 0;
    int l = 0;
    int r = n-1;
    while(l <= r){
      if(str[l] != str[r]){
        count++;
      }
      l++;
      r--;
    }
    char ans[n+2];
    for(int i=0; i<n+1; ++i){
      ans[i] = '0';
      if(i >= count && i <= n - count){
        ans[i] = '1';
        if(n%2 == 0 && i%2 != count%2){
          ans[i] = '0';
        }
      }
    }
    ans[n+1] = '\0';
    printf("%s\n",ans);

  }
  return 0;
}
