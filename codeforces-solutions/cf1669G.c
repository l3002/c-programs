#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, m;
    scanf("%d %d", &n, &m);
    char arr[n][m + 1];
    for (int i = 0; i < n; ++i) {
      scanf("%s", &arr[i]);
    }
    for (int i = 0; i < m; ++i) {
      int count = 0;
      for (int j = 0; j < n; ++j) {
        if (arr[j][i] == '*') {
          arr[j][i] = '.';
          count++;
        }
        if (arr[j][i] == 'o') {
          for (int k = j - count; k < j; ++k) {
            arr[k][i] = '*';
          }
          count = 0;
        }
        if(j == n-1){
          for(int k = j-count+1; k<=j; ++k){
            arr[k][i] = '*';
          }
          count = 0;
        }
      }
    }

    for (int i = 0; i < n; ++i) {
      printf("%s\n", arr[i]);
    }
  }
  return 0;
}
