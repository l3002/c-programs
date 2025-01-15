#include <stdio.h>
#include <stdlib.h>
 
struct node {
  int data;
  struct node *next;
};
 
long long findEdge(struct node *graph[], int root, long long arr[],
                   int vcheck[]);
 
long long findEdge(struct node *graph[], int root, long long arr[],
                   int vcheck[]) {
  struct node *nd = graph[root - 1];
  vcheck[root-1] = 0;
  long long count = 0;
  while (nd != NULL) {
    int cn = nd->data;
    if (vcheck[cn - 1]) {
      count += findEdge(graph, cn, arr, vcheck);
    }
    nd = nd->next;
  }
  if (count == 0) {
    count = 1;
  }
  arr[root - 1] = count;
  return count;
}
 
int main() {
  int t;
  scanf("%d", &t);
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    struct node *graph[n];
    int vcheck[n];
    for (int i = 0; i < n; ++i) {
      graph[i] = NULL;
      vcheck[i] = 1;
    }
    for (int i = 0; i < n - 1; ++i) {
      int a, b;
      scanf("%d %d", &a, &b);
      struct node *val = (struct node *)malloc(sizeof(struct node *));
      struct node *val1 = (struct node *)malloc(sizeof(struct node *));
      val->data = b;
      val->next = NULL;
      if (graph[a - 1] != NULL) {
        val->next = graph[a - 1];
      }
      graph[a - 1] = val;
 
      val1->data = a;
      val1->next = NULL;
      if (graph[b - 1] != NULL) {
        val1->next = graph[b - 1];
      }
      graph[b - 1] = val1;
    }
    long long arr[n];
    findEdge(graph, 1, arr, vcheck);
 
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; ++i) {
      int a, b;
      scanf("%d %d", &a, &b);
      printf("%lld\n", arr[a - 1] * arr[b - 1]);
    }
  }
  return 0;
}
