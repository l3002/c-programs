#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    long long l, r;
    scanf("%d %lld %lld", &n, &l, &r);
    long long arr[n];
    for(int i=0; i<n; ++i){
      scanf("%lld", &arr[i]);
    }
    int count = 0;
    long long sum = 0;
    int x = 0;
    for(int i=0; i<n; ++i){
      sum += arr[i];
      if(sum >= l && sum <= r){
        sum = 0;
        x = i+1;
        count++;
      }
      else if(sum > r){
        while(x < i){
          sum -= arr[x];
          if(sum >= l && sum <= r){
            x = i+1;
            count++;
            break;
          }
          x++;
        }
      }
    }
    printf("%d\n",count);
  }
  return 0;
}
