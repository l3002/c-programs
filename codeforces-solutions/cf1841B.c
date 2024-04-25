#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int q;
    scanf("%d", &q);
    long long int min;
    long long int prev;
    long long int current;
    scanf("%lld", &current);
    min = current;
    prev = current;
    int flag = 1;
    int ans[q];
    ans[0] = 1;
    for (int i = 1; i < q; ++i) {
      scanf("%lld", &current);
      if (flag == 0 && current >= prev && current <= min) {
        ans[i] = 1;
        prev = current;
      } else if (flag == 1 && current >= prev) {
        ans[i] = 1;
        prev = current;
      } else if (current <= prev && current <= min && flag == 1) {
        ans[i] = 1;
        flag = 0;
        prev = current;
      } else {
        ans[i] = 0;
      }
    }
    for (int i = 0; i < q; ++i) {
      printf("%d", ans[i]);
    }
    printf("\n");
  }
  return 0;
}
