#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long n, m;
    scanf("%lld %lld", &n, &m);
    int prime[1000];
    for (int i = 0; i < 1000; ++i) {
      prime[i] = 0;
    }

    for (int i = 2; i * i <= 1000; ++i) {
      if (!prime[i - 1]) {
        long long val = 2 * i;
        while (val <= 1000) {
          prime[val - 1] = 1;
          val += i;
        }
      }
    }

    if (prime[n - 1]) {
      for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
          printf("%lld ",i + 1 + j*n);
        }
        printf("\n");
      }
    } else if (prime[m - 1]) {
      for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
          printf("%lld ", i*m + j+1);
        }
        printf("\n");
      }
    } else {
      for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; j+=2) {
          printf("%lld ",j*n + i+1);
        }
        for(int j = 1; j<m; j+=2){
          printf("%lld ",j*n + i+1);
        }
        printf("\n");
      }
    }
  }
  return 0;
}
