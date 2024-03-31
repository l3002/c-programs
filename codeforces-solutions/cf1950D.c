#include <stdio.h>

int checkIfTrue(int);

int arr[] = {10,    11,    100,   101,   110,   111,   1000,  1001,
             1010,  1011,  1100,  1101,  1110,  1111,  10000, 10001,
             10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001,
             11010, 11011, 11100, 11101, 11110, 11111, 100000};

int checkIfTrue(int n) {
  if (n == 1) {
    return 1;
  }

  for (int i = 0; i < 30; ++i) {
    int num = arr[i];
    if (n % num == 0) {
      if (checkIfTrue(n / num) != 1) {
        continue;
      } else {
        return 1;
      }
    }
  }
  return n;
}

int main() {

  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int result = checkIfTrue(n);
    if (result == 1) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
