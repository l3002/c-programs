#include <stdio.h>
 
int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n,q;
    scanf("%d %d",&n,&q);
    long long arr[n];
    for(int i=0; i<n; ++i){
      scanf("%lld",&arr[i]);
    }
    int qi;
    long long a2[30];
    for(int i=0; i<30; ++i){
      a2[i] = 0;
    }
    for(int i=0; i<q; ++i){
      scanf("%d",&qi);
      long long val = a2[qi-1];
      if(val == 0){
        val = 1 << qi;
        a2[qi-1] = val;
      }
      for(int j=0; j<n; ++j){
        if(arr[j]%val == 0){
          arr[j] += val >> 1;
        }
          if(i == q-1){
            printf("%lld ",arr[j]);
          }
      }
    }
    printf("\n");
  }
  return 0;
}
