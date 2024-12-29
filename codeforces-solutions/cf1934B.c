#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long n;
    scanf("%lld",&n);
    long long ans = 1000000001;
    for(int ones=0; ones<3; ++ones){
      for(int threes=0; threes<2; ++threes){
        for(int sixes=0; sixes<5; ++sixes){
          for(int tens=0; tens<3; ++tens){
            long long sum = ones + 3 * threes + 6 * sixes + 10 * tens;
            if(sum <= n && (n-sum)%15 == 0){
              long long pans = ones + threes + sixes + tens + ((n-sum)/15);
              if(ans > pans){
                ans = pans;
              }
            }
          }
        }
      }
    }
    printf("%lld\n",ans);
  }
  return 0;
}

