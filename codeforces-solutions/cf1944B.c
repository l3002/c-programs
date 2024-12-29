#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[2*n];
    int first[n];
    for(int i=0; i<n; ++i){
      first[i] = 0;
    }
    for(int i=0; i<2*n; ++i){
      scanf("%d", &arr[i]);
      if(i < n){
        first[arr[i]-1]++;
      }
    }
    int l[2*k], r[2*k];
    int index = 0;
    for(int i=0; i<n && index < 2*k; ++i){
      if(first[i] == 1){
        l[index] = r[index] = i+1;
        index++;
      }
    }

    if(index < 2*k){
      int index1 = index;
      int index2 = index;
      for(int i=0; i<n && (index1 < 2*k || index2 < 2*k); ++i){
        if(first[i] == 0 && index1 < 2*k){
          r[index1] = i+1;
          index1++;
        }
        else if(first[i] == 2 && index2 < 2*k){
          l[index2] = i+1;
          index2++;
        }
      }
    }

    for(int i=0; i<2*k; ++i){
      printf("%d ",l[i]);
    }
    printf("\n");

    for(int i=0; i<2*k; ++i){
      printf("%d ",r[i]);
    }
    printf("\n");
  }
  return 0;
}

