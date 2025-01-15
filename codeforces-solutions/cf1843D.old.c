#include <stdio.h>
#include <stdlib.h>
 
struct node{
  int data;
  struct node* next;
};
 
long long findEdge(struct node* graph[], int root, long long arr[]);
 
long long findEdge(struct node* graph[], int root, long long arr[]){
  struct node* val = graph[root-1];
  if(val == NULL){
    arr[root-1] = 1;
    return 1;
  }
  long long count = 0;
  while(val != NULL){
    count += findEdge(graph,val->data,arr);
    val = val->next;
  }
  arr[root-1] = count;
  return count;
}
 
int main(){
  int t;
  scanf("%d",&t);
  while(t-- > 0){
    int n;
    scanf("%d",&n);
    struct node* graph[n];
    for(int i=0; i<n; ++i){
      graph[i] = NULL;
    }
    for(int i=0; i<n-1; ++i){
      int a,b;
      scanf("%d %d",&a,&b);
      struct node* val = (struct node*) malloc(sizeof(struct node*));
      if(a < b){
        val->data = b;
        val->next = NULL;
        if(graph[a-1] == NULL){
          graph[a-1] = val;
        }
        else{
          val->next = graph[a-1];
          graph[a-1] = val;
        }
      }
      else{
        val->data = a;
        val->next = NULL;
        if(graph[b-1] == NULL){
          graph[b-1] = val;
        }
        else{
          val->next = graph[b-1];
          graph[b-1] = val;
        }
      }
    }
    long long arr[n];
    findEdge(graph,1,arr);
 
    int q;
    scanf("%d",&q);
    for(int i=0; i<q; ++i){
      int a,b;
      scanf("%d %d",&a,&b);
      printf("%lld\n",arr[a-1]*arr[b-1]);
    }
  }
  return 0;
}
