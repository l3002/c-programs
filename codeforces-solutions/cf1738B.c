#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, k;
    scanf("%d %d", &n, &k);
    long long ans[n];
    long long psum[k];

    for (int i = 0; i < k; ++i) {
      scanf("%lld", &psum[i]);
    }

    int flag = 0;
    long long sum = psum[0];
    int index = k - 1;
    for (int i = n - 1; i >= 0 && k > 1; --i) {
      if (i == 0) {
        ans[i] = sum;
      } else if (i > n - k) {
        ans[i] = psum[index] - psum[index - 1];
        index--;
      } else {
        ans[i] = ans[i + 1];
        sum -= ans[i + 1];
      }
    }

    for (int i = 0; i < n - 1 && k > 1; ++i) {
      if (ans[i] > ans[i + 1]) {
        flag = 1;
        break;
      }
    }

    if (flag) {
      printf("NO\n");
    } else {
      printf("YES\n");
    }
  }
  return 0;
}
