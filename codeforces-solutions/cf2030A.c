#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max = 0;
    int min = 1001;
    for(int i=0; i<n; ++i){
      scanf("%d",&arr[i]);
      if(max < arr[i]){
        max = arr[i];
      }
      if(min > arr[i]){
        min = arr[i];
      }
    }
    printf("%d\n",(max-min)*(n-1));
  }
  return 0;
}

