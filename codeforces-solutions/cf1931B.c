#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    long long int arr[n];
    long long int sum = 0;
    for (int i = 0; i < n; ++i) {
      scanf("%lld", &arr[i]);
      sum += arr[i];
    }
    long long int eqVal = sum / n;
    long long int carry = 0;
    long long int prevSum = arr[0];
    long long int prev = arr[0];
    long long int countPrev = 1;
    int flag = 0;
    for (int i = 1; i < n; ++i) {
      long long int prevVal = prevSum + carry;
      if (prev < arr[i]) {
        if (prevVal < eqVal * countPrev) {
          flag = 1;
          break;
        }
        carry = prevVal - eqVal * countPrev;
        prevSum = 0;
        countPrev = 0;
      }
      prev = arr[i];
      prevSum += prev;
      countPrev++;
    }
    if (prevSum + carry < eqVal * countPrev) {
      flag = 1;
    }
    if (flag == 1) {
      printf("NO\n");
    } else {
      printf("YES\n");
    }
  }
  return 0;
}
