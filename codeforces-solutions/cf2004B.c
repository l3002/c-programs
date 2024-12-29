#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int l,r,L,R;
    scanf("%d %d",&l,&r);
    scanf("%d %d",&L,&R);
    int com = r - L;
    if(com > R-l){
      com = R-l;
    }
    if(com > R-L){
      com = R-L;
    }
    if(com > r-l){
      com = r-l;
    }
    if(r < L || R < l){
      printf("1\n");
    }
    else if(R == r && l == L){
      printf("%d\n",com);
    }
    else if(R == r || l == L){
      printf("%d\n",com+1);
    }
    else{
      printf("%d\n",com+2);
    }
  }
  return 0;
}
