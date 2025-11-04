#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    char arr[n+1];
    scanf("%s",&arr);
    int f0 = -1;
    int l0 = -1;
    for(int i=0; i<n; ++i){
      if(arr[i] == '0'){
        if(f0 == -1)
          f0 = i;
        l0 = i;
      }
    }
    if(n == 2){
      int val = (arr[0] - '0')*10 + (arr[1] - '0');
      printf("%d\n",val);
    }
    else if(f0 > -1 && (n > 3 || (n == 3 && (f0 == 0 || l0 == n-1)))){
      printf("0\n");
    }
    else{
      int min = 1000;
      for(int i=0; i<n-1; ++i){
        int sum = 0;
        for(int j=0; j<n; ++j){
          int val = arr[j] - '0';
          if(i == j){
            val = val*10 + (arr[++j] - '0');
          }
          if((val == 1 || sum == 1) && j != 0){
            sum *= val;
            continue;
          }
          sum += val;
        }
        if(min > sum){
          min = sum;
        }
      }
      printf("%d\n",min);
    }
  }
  return 0;
}

