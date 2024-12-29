#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    char arr[n+1];
    scanf("%s",arr);
    int count0 = 0;
    int count1 = 0;
    long long sum = 0;
    for(int i=n-1; i>=0; --i){
      if(arr[i] == '0'){
        sum += count1;
        count0++;
        printf("%lld ",sum);
      }
      else{
        count1++;
      }
    }
    for(int i=0; i<n-count0; ++i){
      printf("-1 ");
    }
    printf("\n");
  }
  return 0;
}

