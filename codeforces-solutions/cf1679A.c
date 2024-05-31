#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    long long int n;
    scanf("%lld", &n);
    if (n % 2 != 0 || n < 4) {
      printf("-1\n");
    } else {
      long long int max4 = n / 4;
      long long int max6 = n / 6;
      long long int min6 = 0;
      long long int min4 = 0;
      if (n % 4 != 0) {
        max4--;
        min6++;
      }
      if (n % 6 == 4) {
        min4++;
      }
      if (n % 6 == 2) {
        min4 += 2;
        max6--;
      }
      printf("%lld %lld\n", min4 + max6, max4 + min6);
    }
  }
  return 0;
}
