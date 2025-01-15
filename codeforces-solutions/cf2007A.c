#include <stdio.h>
 
int gcd(int a, int b) {
  if (b % a == 0) {
    return a;
  }
  return gcd(b % a, a);
}
 
int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int l, r;
    scanf("%d %d", &l, &r);
    int arr[r - l + 1];
    int count = 0;
    for (int i = 0; i < r - l + 1; ++i) {
      arr[i] = 1;
    }
    
    for(int i=l; i<=r; ++i){
      for(int j=i+1; j<=r; ++j){
        for(int k=j+1; k<=r; ++k){
          if(gcd(i,j) == 1 && gcd(j,k) == 1 && gcd(i,k) == 1){
            
          }
        }
      }
    }
    printf("%d\n", count);
  }
  return 0;
}
