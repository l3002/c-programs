#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int arr[n];
    long long prefix[n];
    long long suffix[n];
    long long sum = 0;
    int posL = 0;
    int flag = 1;
    int posR = 0;
    for(int i=0; i<n; ++i){
      scanf("%d",&arr[i]);
      prefix[i] = sum;
      sum+=arr[i];
    }
    long long arrsum = sum;
    char str[n+1];
    scanf("%s",&str);
    for(int i=0; i<n; ++i){
      suffix[i] = sum - arr[i];
      sum -= arr[i];
      if(flag && str[i] == 'L'){
        posL = i;
        flag = 0;
      }
      if(str[i] == 'R'){
        posR = i;
      }
    }
    long long score = 0;
    while(posL < posR){
      if(str[posL] == 'L' && str[posR] == 'R'){
        score += arrsum - (prefix[posL] + suffix[posR]);
        posL++;
        posR--;
      }
      else if(str[posL] == 'L'){
        posR--;
      }
      else if(str[posR] == 'R'){
        posL++;
      }
      else{
        posL++;
        posR--;
      }
    }
    printf("%lld\n",score);
  }
  return 0;
}
