#include <stdio.h>
#include <stdlib.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int current;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
      scanf("%d", &current);
      sum += abs(current);
    }
    printf("%d\n", sum);
  }
  return 0;
}
