#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n, d,h;
    scanf("%d %d %d",&n,&d,&h);
    long double sum = 0.0;
    long long arr[n];
    scanf("%lld",&arr[0]);
    long double totalArea = 0.5 * d * h;
    for(int i=1; i<n; ++i){
      scanf("%lld",&arr[i]);
      long long diff = arr[i] - arr[i-1];
      if(diff >= h){
        sum += totalArea;
      }
      else{
        long double tbase = ((long double)d*(h-diff))/h;
        long double tarea = 0.5 * tbase * (h-diff);
        sum += totalArea - tarea;
      }
    }
    sum += totalArea;
    printf("%.7Lf\n",sum);
  }
  return 0;
}

