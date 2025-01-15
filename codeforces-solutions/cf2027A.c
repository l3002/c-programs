#include <stdio.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

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

void mergeSort(int arr[], int l, int r)
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
    scanf("%d",&n);
    int w[n];
    int h[n];
    int maxw = 0;
    int maxh = 0;
    for(int i=0; i<n; ++i){
      scanf("%d %d",&w[i], &h[i]);
      if(w[i] > maxw){
        maxw = w[i];
      }
      if(h[i] > maxh){
        maxh = h[i];
      }
    }
    int ans = maxw + maxh;
    mergeSort(w, 0, n-1);
    mergeSort(h, 0, n-1);
    for(int i=0; i<n-1; ++i){
      ans+= w[i+1] - w[i];
      ans += h[i+1] - h[i];
    }
    ans += w[0] + h[0];
    printf("%d\n",ans);
  }
  return 0;
}

