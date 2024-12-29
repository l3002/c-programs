#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    long long smallest = 1000000000;
    long long ai;
    long long first;
    for(int i=0; i<n; ++i){
      scanf("%lld",&ai);
      if(i == 0){
        first = ai;
      }
      if(ai < smallest){
        smallest = ai;
      }
    }
    if(smallest == first){
      printf("Bob\n");
    }
    else{
      printf("Alice\n");
    }
  }
  return 0;
}

