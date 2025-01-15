#include <math.h>
#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    char arr[n + 1];
    scanf("%s", &arr);
    int prefix[n + 1];
    prefix[0] = 0;
    int sum1 = 0;
    for (int i = 0; i < n; ++i) {
      if (arr[i] == '1') {
        sum1++;
      }
      prefix[i + 1] = sum1;
    }
    double half = (double)n / 2;
    int ans = n + 1;
    for (int i = 0; i < n + 1; ++i) {
      double lne = ceil((double)i / 2);
      double rne = ceil((double)(n - i) / 2);
      if ((lne <= (i - prefix[i])) && (rne <= (sum1 - prefix[i])) &&
          (fabs(half - i) < fabs(half - ans))) {
        ans = i;
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}
