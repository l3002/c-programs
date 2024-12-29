#include <stdlib.h>
#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n,k;
    scanf("%d %d",&n,&k);
    char s[n+1];
    scanf("%s",&s);
    int lc[26];
    int uc[26];
    for(int i=0; i<26; ++i){
      lc[i] = uc[i] = 0;
    }
    for(int i=0; i<n; ++i){
      if(s[i] - 'a' < 26 && s[i] - 'a' >=0){
        lc[s[i] - 'a']++;
      }

      if(s[i] - 'A' < 26 && s[i] - 'A' >=0){
        uc[s[i] - 'A']++;
      }
    }
    int score = 0;
    for(int i=0; i<26; ++i){
      if(lc[i] < uc[i]){
        score+=lc[i];
      } 
      else{
        score+=uc[i];
      }
      int diff = abs(lc[i] - uc[i]);
      if(diff/2 <= k){
        score += diff/2;
        k -= diff/2;
      }
      else{
        score+=k;
        k = 0;
      }
    }
    printf("%d\n",score);
  }
  return 0;
}

