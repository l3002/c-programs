#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    char arr1[n+1];
    char arr2[n+1];
    int check[n];
    scanf("%s\n%s",&arr1,&arr2);
    int count = 0;
    for(int i=0; i<n; ++i){
      check[i] = 0;
    }
    for(int i=0; i<n; ++i){
      if(arr1[i] == '0' && arr2[i] == '0'){
        if((i-1 < n && arr1[i-1] == '1' && arr2[i-1] == '1') && !check[i-1]){
          count+=2;
          check[i-1] = 1;
        }
        else if((i+1 >= 0 && arr1[i+1] == '1' && arr2[i+1] == '1' &&  !check[i+1])){
          count+=2;
          check[i+1] = 1;
        }
        else{
          count++;
        }
      }
      else if(arr1[i] == '0' || arr2[i] == '0'){
        count += 2;
      }
    }
    printf("%d\n",count);
  }
  return 0;
}
