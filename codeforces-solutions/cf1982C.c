#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    long long l, r;
    scanf("%d %lld %lld", &n, &l, &r);
    long long sum = 0;
    long long arr[n];
    long long suffix[n];
    int check[n];
    int ls = 0;
    int cs = 0;
    for (int i = 0; i < n; ++i) {
      scanf("%lld", &arr[i]);
      sum += arr[i];
      check[i] = 1;
      if(arr[i] > r){
        check[i] = 0;
      }
      if(check[i]){
        cs++
      }
      else{

      }
    }
    for (int i = 0; i < n; ++i) {
      suffix[i] = sum - arr[i];
      sum -= arr[i];
    }
    long long countMax = 0;
    for (int i = 0; i < n && i < ls; ++i) {
      printf("ls - %d -> %d\n",i,ls);
      ls = 0;
      for (int j = 0; i + j < n; ++j) {
        long long sval = arr[j] + suffix[j] - suffix[i + j];
        if (check[j] && sval >= l && sval <= r) {
          int andCheck = check[j];
          for (int k = j + 1; k <= i + j && andCheck; ++k) {
            andCheck &= check[k];
          }
          if (andCheck) {
            countMax++;
            printf("j = %d\n",j);
            for (int k = j; k <= i + j; ++k) {
              check[k] = 0;
            }
          }
        }
      }
      for(int j = 0; j<n; ++j){
        if(check[j]){
          cs++;
        }
        else{
          if(cs > ls ){
            ls = cs;
          }
          cs = 0;
        }
      }
    }
    printf("%lld\n", countMax);
  }
  return 0;
}
