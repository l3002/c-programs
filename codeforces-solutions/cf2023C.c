#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    char arr[n + 1];
    scanf("%s", &arr);
    int count = 0;
    int flag = 0;
    for (int i = 0; i < n - 1; ++i) {
      if ((arr[i] == '1' && arr[i + 1] == '0') ||
          (arr[i] == '0' && arr[i + 1] == '1')) {
        if (count % 2 != 0) {
          if (arr[i] == '1') {
            arr[i] = '0';
          } else if (arr[i + 1] == '1') {
            arr[i + 1] = '0';
          }
        }
        count++;
      }
    }
    for(int i=0; i<n; ++i){
      if(arr[i] == '1'){
        flag = 1;
        break;
      }
    }
    if (flag) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
