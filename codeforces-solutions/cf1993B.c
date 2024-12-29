#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
  long long al = *(long long*)a;  
  long long bl = *(long long*)b;
  if(al > bl){
    return 1;
  }
  else if(bl > al){
    return -1;
  }
  return 0;
}

int main(int argc, char *argv[])
{
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    long long arr[n];
    long long maxEven = -1;
    long long maxOdd = -1;
    int count = 0;
    for(int i=0; i<n; ++i){
      scanf("%lld",&arr[i]);
      if(arr[i]%2 == 0 && maxEven < arr[i]){
        maxEven = arr[i];
      }
      if(arr[i]%2 == 0){
        count++;
      }
      if(arr[i]%2 != 0 && maxOdd < arr[i]){
        maxOdd = arr[i];
      }
    }
    qsort(arr,n,sizeof(long long), compare);
    int flag = 1;
    for(int i=0; i<n; ++i){
      if(arr[i]%2 == 0 && maxOdd > arr[i]){
        maxOdd += arr[i];
      }
      else if(arr[i]%2 == 0 && maxOdd < arr[i]){
        flag = 0;
        break;
      }
    }
    if(maxEven == -1 || maxOdd == -1){
      printf("0\n");
    }
    else if(maxOdd > maxEven || flag){
      printf("%d\n",count);
    }
    else{
      printf("%d\n",count+1);
    }
  }
  return 0;
}
