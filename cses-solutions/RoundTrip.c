#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

int findCycleRoot(struct node *graph[], int node, int check[]) {
  if (check[node]) {
    return node;
  }
  check[node] = 1;
  struct node *curr = graph[node];
  if (curr == NULL) {
    return -1;
  }
  while (curr != NULL) {
    int potRoot = findCycleRoot(graph, curr->data, check);
    if (potRoot >= 0) {
      return potRoot;
    }
    curr = curr->next;
  }
  return -1;
}

int findCycle(struct node *graph[], int root, int curr, int check[],
              int path[]) {
  struct node *c = graph[curr];
  if (c == NULL) {
    return 0;
  }
  if (c->data == root) {
    return 1;
  }
  while (c != NULL) {
    if (check[c->data]) {
      int found = findCycle(graph, root, c->data, check, path);
      if (found) {
        path[found - 1] = c->data;
        return found + 1;
      }
    }
  }
  return 0;
}

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  struct node *graph[n];
  int check[n];
  for (int i = 0; i < n; ++i) {
    graph[i] = NULL;
    check[i] = 0;
  }
  for (int i = 0; i < m; ++i) {
    int x, y;
    scanf("%d %d", &x, &y);
    struct node *newNode = (struct node *)malloc(sizeof(struct node *));
    newNode->data = x - 1;
    newNode->next = graph[y - 1];
    graph[y - 1] = newNode;
    newNode = (struct node *)malloc(sizeof(struct node *));
    newNode->data = y - 1;
    newNode->next = graph[x - 1];
    graph[x - 1] = newNode;
  }
  for (int i = 0; i < n; ++i) {
    struct node *curr = graph[i];
    while (curr != NULL) {
      printf("%d -> ", curr->data);
      curr = curr->next;
    }
    printf("\n");
  }
  int pcroot;
  for (int i = 0; i < n; ++i) {
    if (!check[i]) {
      pcroot = findCycleRoot(graph, i, check);
      printf("%d %d\n", i, pcroot);
      if (pcroot >= 0) {
        break;
      }
    }
  }
  int path[n];
  if (pcroot >= 0) {
    int countNode = findCycle(graph, pcroot, pcroot, check, path);
    printf("%d\n", countNode);
    for (int i = countNode - 2; i >= 0; --i) {
      printf("%d ", path[i]);
    }
    printf("\n");
  } else {
    printf("IMPOSSIBLE\n");
  }
  return 0;
}
