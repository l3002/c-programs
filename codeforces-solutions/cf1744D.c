#include <math.h>
#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    long long arr[n];
    for (int i = 0; i < n; ++i) {
      scanf("%lld", &arr[i]);
    }
    
    int k = 0;
    for (int i = 0; i < n && k < n; ++i) {
      while (arr[i] % 2 == 0) {
        arr[i] /= 2;
        k++;
        if (k == n) {
          break;
        }
      }
    }

    double rem = n-k;
    int l = (int)log2((double)n);
    int o = 0;

    int maxop[l];

    for(int i=0; i<l; ++i){
      maxop[i] = 0;
    }

    int curr = 1;
    for (int i = 0; i < l; ++i) {
      curr*=2;
      maxop[i] = (int) ceil(((double)(n/curr))/2);
    }

    for(int i=l-1; i>=0; --i){
      if(maxop[i] > 0){
        int req = (int) ceil(rem/(i+1));
        rem -= (i+1)*maxop[i];
        if(req > maxop[i]){
          o += maxop[i];
        }
        else{
          o += req;
          break;
        }
      }
    }

    if (rem <= 0) {
      printf("%d\n", o);
    } else {
      printf("-1\n");
    }
  }
  return 0;
}
