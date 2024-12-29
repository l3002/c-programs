#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int a1,a2,b1,b2;
    scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
    int ans = 0;
    int val1 = a1-b1;
    int val2 = a2-b2;
    int val3 = a1-b2;
    int val4 = a2-b1;
    if((val1 >= 0 && val2 >= 0) && !(val1 == 0 && val2 == 0)){
      ans += 2;
    }
    if((val3 >= 0 && val4 >= 0) && !(val4 == 0 && val3 == 0)){
      ans += 2;
    }
    printf("%d\n",ans);
  }
  return 0;
}
