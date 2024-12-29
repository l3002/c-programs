#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

void traverse(struct node *graph[], int cn, int check[]);

void traverse(struct node *graph[], int cn, int check[]) {
  if (!check[cn]) {
    return;
  }
  check[cn] = 0;
  struct node *curr = graph[cn];
  while (curr != NULL) {
    traverse(graph, curr->data, check);
    curr = curr->next;
  }
}

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  struct node *graph[n];
  int check[n];
  for (int i = 0; i < n; ++i) {
    graph[i] = NULL;
    check[i] = 1;
  }
  for (int i = 0; i < m; ++i) {
    int a, b;
    scanf("%d %d", &a, &b);
    struct node *newNode = (struct node*)malloc(sizeof(struct node *));
    newNode->data = b - 1;
    newNode->next = graph[a - 1];
    graph[a - 1] = newNode;

    newNode = (struct node*)malloc(sizeof(struct node *));
    newNode->data = a - 1;
    newNode->next = graph[b - 1];
    graph[b - 1] = newNode;
  }
  int count = 0;
  int ans[n];
  for (int i = 0; i < n; ++i) {
    if (check[i]) {
      ans[count] = i + 1;
      count++;
      traverse(graph, i, check);
    }
  }
  printf("%d\n", count - 1);
  for (int i = 0; i < count - 1; ++i) {
    printf("%d %d\n", ans[i], ans[i + 1]);
  }
  return 0;
}
