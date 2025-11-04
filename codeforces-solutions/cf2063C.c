#include <stdio.h>
#include <stdlib.h>

struct ll_node {
  int data;
  struct ll_node *next;
};

int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    struct ll_node *graph[n];
    int count[n];
    for(int i=0; i<n; ++i){
      graph[i] = NULL;
      count[i] = 0;
    }
    for(int i=0; i<n-1; ++i){
      int x,y;
      scanf("%d %d",&x,&y);

      struct ll_node *newNode = (struct ll_node*) malloc(sizeof(struct ll_node));
      newNode->data = x;
      newNode->next = graph[y-1];
      graph[y-1] = newNode;

      newNode = (struct ll_node*) malloc(sizeof(struct ll_node));
      newNode->data = y;
      newNode->next = graph[x-1];
      graph[x-1] = newNode;

      count[x-1]++;
      count[y-1]++;
    }

    int max = -1;
    int ans = 0;
    int maxNode = 0;
    for(int i=0; i<n; ++i){
      if(count[i] >= max){
        max = count[i];
        maxNode = i;
      }
    }
    ans+=max;
    count[maxNode] = -1;
    struct ll_node *mNode = graph[maxNode];
    while(mNode != NULL){
      count[(mNode->data) - 1]--;
      mNode = mNode->next;
    }

    max = -1;
    for(int i=0; i<n; ++i){
      if(count[i] > max){
        max = count[i];
      }
    }
    ans+=max;
    printf("%d\n",ans-1);
  }
  return 0;
}

