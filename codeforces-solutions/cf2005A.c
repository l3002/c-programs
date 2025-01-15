#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    char arr[] = {'a', 'e', 'i', 'o', 'u'};
    for (int j = 0; j < 5; ++j) {
      for (int i = 0; i < n / 5; ++i) {
        printf("%c", arr[j]);
      }
      if(j < n%5){
        printf("%c",arr[j]);
      }
    }
    printf("\n");
  }
  return 0;
}
