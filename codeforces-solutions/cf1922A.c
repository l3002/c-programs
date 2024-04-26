#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    char arr1[n + 1];
    char arr2[n + 2];
    char arr3[n + 3];
    scanf("%s", &arr1);
    scanf("%s", &arr2);
    scanf("%s", &arr3);
    int flag = 1;
    for (int i = 0; i < n; ++i) {
      if (arr1[i] == arr2[i] && arr1[i] != arr3[i]) {
        flag = 0;
      }
      if (arr1[i] != arr2[i] && arr1[i] != arr3[i] && arr2[i] != arr3[i]) {
        flag = 0;
      }
    }
    if (flag == 0) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
