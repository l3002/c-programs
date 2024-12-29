#include <stdio.h>
#include <stdlib.h>

int compare(const void* a , const void* b){
  return *(int*) b - *(int*) a;
}

int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", &s);
    int count[26];
    for (int i = 0; i < 26; ++i) {
      count[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
      count[s[i] - 'a']++;
    }
    qsort(count, 26, sizeof(int), compare);
    int ans = 0;
    for (int i = 0; i < 26; ++i) {
      ans = abs(ans - count[i]);
    }
    printf("%d\n", ans);
  }
  return 0;
}
