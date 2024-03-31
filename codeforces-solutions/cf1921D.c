/*
 *
 * Author : l3002 <tanmaymathpal4545@gmail.com>
 *
 * Description : Solution to Codeforces 1921 D problem
 *
 */

#include <stdio.h>
#include <stdlib.h>

int compare(const void *, const void *);

int compare(const void *a, const void *b) {

  long long num1 = *(long long *)a;
  long long num2 = *(long long *)b;

  if (num1 < num2) {

    return -1;

  }

  else if (num1 > num2) {

    return 1;
  }

  return 0;
}

int main() {

  int t, n, m;

  scanf("%d", &t);

  while (t-- > 0) {

    scanf("%d", &n);
    scanf("%d", &m);

    long long a[n], b[m];

    for (int i = 0; i < n; ++i) {

      scanf("%lld", &a[i]);
    }
    for (int i = 0; i < m; ++i) {

      scanf("%lld", &b[i]);
    }

    qsort(a, n, sizeof(long long), compare);
    qsort(b, m, sizeof(long long), compare);

    int startA = 0, endA = n - 1, startB = 0, endB = m - 1;
    long long absDiff1, absDiff2, absDiff3, absDiff4;
    long long maxDiffSum = 0;

    while (startA <= endA) {

      absDiff1 = llabs(a[startA] - b[startB]);
      absDiff2 = llabs(a[startA] - b[endB]);
      absDiff3 = llabs(a[endA] - b[startB]);
      absDiff4 = llabs(a[endA] - b[endB]);

      if (absDiff1 >= absDiff2 && absDiff1 >= absDiff3 &&
          absDiff1 >= absDiff4) {
        maxDiffSum += absDiff1;
        startA++;
        startB++;
      } else if (absDiff2 >= absDiff1 && absDiff2 >= absDiff3 &&
                 absDiff2 >= absDiff4) {
        maxDiffSum += absDiff2;
        startA++;
        endB--;
      } else if (absDiff3 >= absDiff1 && absDiff3 >= absDiff2 &&
                 absDiff3 >= absDiff4) {
        maxDiffSum += absDiff3;
        endA--;
        startB++;
      } else {
        maxDiffSum += absDiff4;
        endA--;
        endB--;
      }
    }
    printf("%lld\n", maxDiffSum);
  }
  return 0;
}
