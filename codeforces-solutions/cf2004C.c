#include <stdio.h>

void merge(long long arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    long long L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(long long arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    long long int k;
    scanf("%d %lld",&n,&k);
    long long arr[n];
    for(int i=0; i<n; ++i){
      scanf("%lld",&arr[i]);
    }
    mergeSort(arr, 0, n-1);
    long long ans = 0;
    for(int i=n-2,j=n-1; i>=0 && j>=0; i-=2,j-=2){
      ans += arr[j] - arr[i];
    }
    if(ans <= k){
      ans = 0;
    }
    else{
      ans -= k;
    }
    if(n%2 != 0){
      ans += arr[0];
    }
    printf("%lld\n",ans);
  }
  return 0;
}
