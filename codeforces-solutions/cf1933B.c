#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int arr[n];
    long long int sum = 0;
    int flag = 0;
    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
      sum += arr[i];
    }
    for (int i = 0; i < n; ++i) {
      if ((sum - arr[i]) % 3 == 0) {
        flag = 1;
        break;
      }
    }
    if (sum % 3 == 0) {
      printf("0\n");
    } else if (flag) {
      printf("1\n");
    } else {
      printf("%lld\n", 3 - (sum % 3));
    }
  }
  return 0;
}
