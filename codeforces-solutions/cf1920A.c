#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    long long int smallest = 0;
    long long int smallTemp = 0;
    long long int largest = 1000000001;
    long long int largeTemp = 1000000001;
    int type = 0;
    long long int equal[n];
    int index = 0;
    for (int i = 0; i < n; ++i) {
      scanf("%d", &type);
      if (type == 1) {
        scanf("%lld", &smallTemp);
        if (smallTemp > smallest) {
          smallest = smallTemp;
        }
      } else if (type == 2) {
        scanf("%lld", &largeTemp);
        if (largeTemp < largest) {
          largest = largeTemp;
        }
      } else {
        scanf("%lld", &equal[index]);
        index++;
      }
    }

    long long int ans = (largest - smallest) + 1;
    if (ans <= 0) {
      ans = 0;
    } else {
      for (int i = 0; i < index; ++i) {
        if ((equal[i] < largest && equal[i] > smallest) ||
            equal[i] == largest || equal[i] == smallest) {
          ans--;
        }
      }
    }
    printf("%lld\n", ans);
  }
  return 0;
}
