#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while (t-- > 0) {
    int k,n;
    scanf("%d %d",&k,&n);
    int l = 1;
    int c = 1;
    while(k != 0 && (n-l) >= (k-1)){
      printf("%d ",l);
      l+=c;
      k--;
      c++;
    }
    c--;
    l-=c;
    for(int i=0; i<k; ++i){
      printf("%d ",++l);
    }
    printf("\n");
  }
  return 0;
}
