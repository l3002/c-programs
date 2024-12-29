#include <stdio.h>
#include <string.h>

#define MAX 200001

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    char s[MAX];
    scanf("%s",&s);
    int n = strlen(s);
    long long p;
    long long x = 0;
    scanf("%lld",&p);
    char ans[MAX];
    int index = 0;
    int arr[26];
    for(int i=0; i<26; ++i){
      arr[i] = 0;
    }
    for(int i=0; i<n; ++i){
      arr[s[i] - 'a'] += 1;
    }
    for(int i=0; i<26; ++i){
      if(p-x >= arr[i]*(i+1)){
        x += arr[i]*(i+1);
      }
      else if(p-x != 0 && (p-x) < arr[i]*(i+1)){
        arr[i] = (p-x)/(i+1);
        x = p;
      }
      else if(p-x == 0){
        arr[i] = 0;
      }
    }
    for(int i=0; i<n; ++i){
      if(arr[s[i] - 'a'] != 0){
        ans[index] = s[i];
        arr[s[i] - 'a'] -= 1;
        index++;
      }
    }
    ans[index] = '\0';
    printf("%s\n",ans);
  }
  return 0;
}
