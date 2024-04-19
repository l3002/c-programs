#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int sum = (n * (n + 1)) / 2;
    long long int wholesum = 0;
    char str[2000];
    int index = 0;
    for (int i = n; i >= 1; --i) {
      index += sprintf(&str[index], "%d ", i);
    }

    for (int i = 1; i <= n; ++i) {
      wholesum += i * i + sum - ((i * (i + 1)) / 2);
    }
    printf("%lld %d\n", wholesum, 2 * n);
    for (int i = 1; i <= 2 * n; ++i) {
      if (i % 2 != 0) {
        printf("1 %d %s\n", (i / 2 + 1), str);
      } else {
        printf("2 %d %s\n", (i / 2), str);
      }
    }
  }
  return 0;
}
