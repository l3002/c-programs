#include <string.h>
#include <stdio.h>

#define MAX 401

int main()
{
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    char str[MAX];
    scanf("%s",str);
    int countA=0;
    int countB=0;
    int countC=0;
    int countD=0;
    for (int i=0; i<strlen(str); ++i) {
      if(str[i] == 'A')
        countA++;
      else if(str[i] == 'B')
        countB++;
      else if (str[i] == 'C')
        countC++;
      else if (str[i] == 'D')
        countD++;
    }
    if(countD > n)
      countD = n;
    if(countA > n)
      countA = n;
    if(countB > n)
      countB = n;
    if(countC > n)
      countC = n;
    printf("%d\n",countA + countB + countC + countD);
  }
  return 0;
}
