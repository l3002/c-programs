#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long l,r;
    scanf("%lld %lld",&l,&r);
    long long start = l;
    long long count = 1;
    while(start+count <= r){
      start += count;
      count++;
    }
    printf("%lld\n",count);
  }
  return 0;
}

