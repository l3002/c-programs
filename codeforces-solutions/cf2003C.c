#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",&s);
    int arr[26];
    for(int i=0; i<26; ++i){
      arr[i] = 0;
    }
    for(int i=0; i<n; ++i){
      arr[s[i] - 'a']++;
    }
    for(int i=0; i<26; ++i){
      if(arr[i] > 0){
        int j = i+1;
        while(j<26 && arr[i] > 0){
          if(arr[j] > 0){
            printf("%c%c",'a' + j, 'a' + i);
            arr[j]--;
            arr[i]--;
          }
          else{
            j++;
          }
        }
        while(arr[i] > 0){
          printf("%c",'a' + i);
          arr[i]--;
        }
      }
    }
    printf("\n");
  }
  return 0;
}

