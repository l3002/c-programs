#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int arr[n];
    int x = 0;
    int y = 0;
    int max1 = 0;
    int max2 = 0;
    for(int i=0; i<n;i++){
      scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i+=2){
      x++;
      if(max1 < arr[i]){
        max1 = arr[i];
      }
    }
    for(int i=1; i<n; i+=2){
      y++;
      if(max2 < arr[i]){
        max2 = arr[i];
      }
    }
    if(max1 + x < max2 + y){
      printf("%d\n",max2 + y);
    }
    else{
      printf("%d\n",max1 + x);
    }
  }
  return 0;
}

