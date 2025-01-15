#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int arr[n];
    int check[n];
    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
      check[i] = 1;
    }
    long long sum = 0;
    int count = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n - i; ++j) {
        int c = check[j];
        sum = arr[j];
        for (int k = j+1; k <= j + i && c; ++k) {
          sum += arr[k];
          c &= check[k];
        }
        if (c && sum == 0) {
          count++;
          for (int k = j; k <= j + i; ++k) {
            check[k] = 0;
          }
        }
      }
    }
    for(int i=0; i<n; ++i){
      check[i] = 1;
    }

    int count1 = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = n-1; j >= i; --j) {
        int c = check[j];
        sum = arr[j];
        for (int k = j-1; k >= j - i && c; --k) {
          sum += arr[k];
          c &= check[k];
        }
        if (c && sum == 0) {
          count1++;
          for (int k = j; k >= j - i; --k) {
            check[k] = 0;
          }
        }
      }
    }
    if(count1 > count){
      count = count1;
    }
    printf("%d\n", count);
  }
  return 0;
}
