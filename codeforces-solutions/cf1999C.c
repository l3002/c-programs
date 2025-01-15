#include <stdio.h>


int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    long long s,m;
    scanf("%d %lld %lld",&n,&s,&m);
    int flag = 0;
    int last = 0;
    for(int i=0; i<n; ++i){
      long long l,r;
      scanf("%lld %lld",&l,&r);
      if(l-last >= s){
        flag = 1;
      }
      last = r;
    }
    if(m - last >= s){
      flag = 1;
    }
    if(flag){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}

