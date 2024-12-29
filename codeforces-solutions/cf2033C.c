#include <math.h>
#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
    }
    int c[n-1];
    for(int i=0; i<n-1; ++i){
      if(arr[i] == arr[i+1]){
        c[i] = 1;
      }
      else{
        c[i] = 0;
      }
    }
    for(int i=1; i<n-1; ++i){
      if(c[i] && i != ceil((double)n/2)){
        int f = i;
        int fs = n-f-1;
        int l = i+1;
        int ls = n-l-1;
        if(arr[fs] != arr[f] && arr[fs] != arr[f-1] && arr[f] != arr[fs+1] && arr[f] != arr[fs-1]){
          c[i] = 0;
        }
        else if(arr[ls] != arr[l] && arr[ls] != arr[l-1] && arr[l] != arr[ls+1] && arr[l] != arr[ls-1]){
          c[i] = 0;
        }
      }
    }
    int mid = ceil((double)n/2);
    int mids = n-mid-1;
    if(c[mid] && arr[mid] != arr[mids]){
      if(mid - 1 < n && mid-1 > 0 && arr[mid-1] == arr[mid]){

      }
    }
    if(c[0] && arr[0] != arr[n-1] && arr[0] != arr[n-2]){
      c[0] = 0;
    }
    if(c[n-1] && arr[0] != arr[n-1] && arr[n-1] != arr[1]){
      c[n-1] = 0;
    }

    int count = 0;
    for(int i=0; i<n-1; ++i){
      if(c[i]){
        count++;
      }
    }

    printf("%d\n",count);
  }
  return 0;
}
