#include <stdio.h>

int main(int argc, char *argv[])
{
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int sum = 0;
    while(n > 0){
      sum += n%10;
      n /= 10;
    }
    printf("%d\n",sum);
  }
  return 0;
}
