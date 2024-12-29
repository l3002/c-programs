#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int d[n];
    scanf("%d", &d[0]);
    int a[n];
    a[0] = d[0];
    int flag = 1;
    for (int i = 1; i < n; ++i) {
      scanf("%d", &d[i]);
      int x = d[i] + a[i - 1];
      int y = a[i - 1] - d[i];
      if (x >= 0 && y >= 0) {
        if (x == y) {
          a[i] = x;
        } else {
          flag = 0;
        }
      }
      else if(x >= 0){
        a[i] = x;
      }
      else{
        a[i] = y;
      }
    }
    if (flag) {
      for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
      }
      printf("\n");
    } else {
      printf("-1\n");
    }
  }
  return 0;
}
