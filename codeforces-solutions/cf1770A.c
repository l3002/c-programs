#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n,m;
    scanf("%d %d",&n,&m);
    long long a1[n],a2;
    for(int i=0; i<n; ++i){
      scanf("%lld",&a1[i]);
    }
    for(int i=0; i<m; ++i){
      scanf("%lld",&a2);
      long long min = 1000000001;
      int minIndex = 0;
      for(int j=0; j<n; ++j){
        if(min > a1[j]){
          min = a1[j];
          minIndex = j;
        }
      }
      a1[minIndex] = a2;
    }
    long long sum = 0;
    for(int i=0; i<n; ++i){
      sum += a1[i];
    }
    printf("%lld\n",sum);
  }
}

