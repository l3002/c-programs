#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int l,r;
    scanf("%d %d",&l,&r);
    int a = 3;
    int pow3 = 1;
    while(a <= l){
      a*=3;
      pow3++;
    }
    int ans = pow3;
    while(a <= r){
      ans += (a-l)*pow3;
      pow3++;
      l = a;
      a*=3;
    }
    ans += (r - l + 1)*pow3;
    printf("%d\n",ans);
  }
  return 0;
}
