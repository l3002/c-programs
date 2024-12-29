#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    char x[3];
    scanf("%s", &x);
    char arr[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    for (int i = 0; i < 8; ++i) {
      if (arr[i] != x[0]) {
        printf("%c%c\n", arr[i],x[1]);
      }
      if(i+1 != (x[1] - '0')){
        printf("%c%d\n",x[0],i+1);
      }
    }
  }
  return 0;
}
