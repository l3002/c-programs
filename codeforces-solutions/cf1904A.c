#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    long long a,b, xk,yk,xq,yq;
    scanf("%lld %lld",&a,&b);
    scanf("%lld %lld",&xk,&yk);
    scanf("%lld %lld",&xq,&yq);
    long long xnk[8],ynk[8];
    long long xnq[8],ynq[8];
    long long x[] = {a,-a};
    long long y[] = {b,-b};
    int p = 0;
    int q = 0;
    for(int i=0; i<2; ++i){
      for(int j=0; j<2; ++j){
        xnk[p] = xk + x[i];
        ynk[q] = yk + y[j];
        xnq[p++] = xq + x[i];
        ynq[q++] = yq + y[j];
        xnk[p] = xk + y[j];
        ynk[q] = yk + x[i];
        xnq[p++] = xq + y[j];
        ynq[q++] = yq + x[i];
      } 
    }
    int count = 0;
    for(int i=0; i<8; ++i){
      for(int j=0; j<8;++j){
        if(xnk[i] == xnq[j] && ynk[i] == ynq[j]){
          count++;
        }
      }
    }
    if(a == b){
      count /= 4;
    }
    printf("%d\n",count);
  }
}

