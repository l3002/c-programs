#include <stdio.h>


int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int arr;
    int f;
    for(int i=0; i<n; ++i){
      scanf("%d",&arr);
      if(i == 0){
        f = arr;
      }
      if(i > 0){
        printf("%d ",arr);
      }
    }
    printf("%d\n",f);
  }
  return 0;
}
