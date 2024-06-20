#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int speed[n], ram[n], hdd[n], cost[n], check[n];
  for (int i = 0; i < n; ++i) {
    scanf("%d %d %d %d", &speed[i], &ram[i], &hdd[i], &cost[i]);
    check[i] = 1;
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (speed[i] < speed[j] && ram[i] < ram[j] && hdd[i] < hdd[j]) {
        check[i] = 0;
      }
    }
  }
  int costMin = 1001;
  int index = -1;
  for (int i = 0; i < n; ++i) {
    if (costMin > cost[i] && check[i]) {
      costMin = cost[i];
      index = i;
    }
  }
  printf("%d\n", ++index);
  return 0;
}
