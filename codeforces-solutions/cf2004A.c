#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; ++i){
      scanf("%d",&arr[i]);
    }
    if(n == 2 && arr[0] + 1 != arr[1]){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
