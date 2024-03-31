#include <stdbool.h>
#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    char a[n + 1];
    int count[n];
    for (int i = 0; i < n; ++i) {
      scanf("%s", &a);
      int countOnes = 0;
      for (int j = 0; j < n; ++j) {
        if (a[j] == '1') {
          countOnes++;
        }
      }
      count[i] = countOnes;
    }
    int prev = count[0];
    bool flag = false;
    for (int i = 1; i < n; ++i) {
      if (count[i] == prev && count[i] != 0) {
        flag = true;
      }
      prev = count[i];
    }
    if (flag) {
      printf("SQUARE\n");
    } else {
      printf("TRIANGLE\n");
    }
  }
}
