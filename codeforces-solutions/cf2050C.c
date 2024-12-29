#include <stdio.h>
#include <string.h>

#define MAX 100001

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    char num[MAX];
    scanf("%s",&num);
    int n = strlen(num);
    int sumofdigits = 0;
    int count2 = 0;
    int count3 = 0;
    for(int i=0; i<n; ++i){
      int x = num[i] - '0';
      if(x == 2){
        count2++;
      }
      if(x == 3){
        count3++;
      }
      sumofdigits += x;
    }
    int rem = sumofdigits%9 == 0 ? 0 :  9 - sumofdigits%9;

    if(rem%2 != 0){
      rem += 9;
    }

    if(rem && count3 > 0 && rem/6 <= count3){
      rem -= (rem/6)*6;
    }
    if(rem && count3 > 0 && rem/6 > count3){
      rem -= count3*6;
    }
    if(rem && count2 > 0 && rem/2 <= count2){
      rem -= (rem/2)*2;
    }
    if(rem && count2 > 0 && rem/2 > count2){
      rem -= count2*2;
    }
    
    if(rem){
      printf("No\n");
    }
    else{
      printf("Yes\n");
    }
  }
  return 0;
}

