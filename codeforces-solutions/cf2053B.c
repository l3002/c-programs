#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    int arr[n][2];
    int max = 0;
    for(int i=0; i<n; ++i){
      scanf("%d %d",&arr[i][0],&arr[i][1]);
      if(arr[i][1] > max){
        max = arr[i][1];
      }
    }
    int a[max];
    int c[max];
    int prefix[max];
    for(int i=0; i<max; ++i){
      a[i] = 1;
      c[i] = 0;
    }
    for(int i=0; i<n; ++i){
      if(arr[i][0] == arr[i][1]){
        c[arr[i][0] - 1]++;
        a[arr[i][0] - 1] = 0;
      }
    }
    int asum = 0;
    for(int i=0; i<max; ++i){
      asum += a[i];
      prefix[i] = asum;
    }

    char ans[n+1];
    for(int i=0; i<n; ++i){
      if(arr[i][0] == arr[i][1] && c[arr[i][0] - 1] > 1){
        ans[i] = '0';
      }
      else if(arr[i][1] - arr[i][0] > 0){
        int s = prefix[arr[i][1] - 1] - (arr[i][0] - 2 >= 0 ? prefix[arr[i][0]-2] : 0);
        if(s > 0){
          ans[i] = '1';
        }
        else{
          ans[i] = '0';
        }
      }
      else if(arr[i][0] == arr[i][1]){
        ans[i] = '1';
      }
    }
    ans[n] = '\0';
    printf("%s\n",ans);
  }
  return 0;
}

