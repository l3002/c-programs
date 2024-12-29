#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, s;
    scanf("%d %d", &n, &s);
    int arr[n];
    int pos1[n];
    int index = 0;
    int countfz[n];
    int countbz[n];
    int countf = 0;
    int countb = 0;
    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
    }
    for (int i = 0, j = n - 1; i < n; ++i, --j) {
      if (arr[i]) {
        pos1[index] = i;
        countfz[i] = countf;
        countf = 0;
        index++;
      } else {
        countf++;
        countfz[i] = 0;
      }
      if (arr[j]) {
        countbz[j] = countb;
        countb = 0;
      } else {
        countb++;
        countbz[j] = 0;
      }
    }
    int maxsize = 0;
    for (int i = 0; i < index - (s - 1); ++i) {
      int l = pos1[i + s - 1];
      int f = pos1[i];
      int size = countbz[l] + countfz[f] + l - f + 1;
      if (maxsize < size) {
        maxsize = size;
      }
    }
    if (maxsize != 0) {
      printf("%d\n", n - maxsize);
    } else {
      printf("-1\n");
    }
  }
  return 0;
}
