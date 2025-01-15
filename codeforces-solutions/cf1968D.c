#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n, pb, ps;
    long long k;
    scanf("%d %lld %d %d", &n, &k, &pb, &ps);
    int arr[n];
    long long s[n];
    for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; ++i) {
      scanf("%lld", &s[i]);
    }

    int size = n > k ? k : n;
    long long csum = 0;
    long long maxsum = 0;
    long long maxsums = 0;
    int count = 0;
    int c = ps - 1;
    while (count < size) {
      csum += s[c];
      count++;
      maxsum = csum + (k-count)*s[c];
      if(maxsum > maxsums){
        maxsums = maxsum;
      }
      c = arr[c] - 1;
    }

    csum = 0;
    maxsum = 0;
    count = 0;
    c = pb - 1;
    long long maxsumb = 0;

    while (count < size) {
      csum += s[c];
      count++;
      maxsum = csum + (k-count)*s[c];
      if(maxsum > maxsumb){
        maxsumb = maxsum;
      }
      c = arr[c] - 1;
    }

    if (maxsums == maxsumb) {
      printf("Draw\n");
    } else if (maxsums < maxsumb) {
      printf("Bodya\n");
    } else {
      printf("Sasha\n");
    }
  }
  return 0;
}
