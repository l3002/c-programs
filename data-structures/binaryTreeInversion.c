#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* rightChild;
  struct node* leftChild;
};

struct node root;

void insertValueWithRoot(struct node* head, int value){
  if(head->data == 0){
    head->data = value;
    return;
  }
  if(head->data < value){
    if(head->rightChild == NULL){
      struct node *newNode = (struct node*) malloc(sizeof(struct node*));
      newNode->data = value;
      head->rightChild = newNode;
      return;
    }
    insertValueWithRoot(head->rightChild, value);
  }
  if(head->data >= value){
    if(head->leftChild == NULL){
      struct node *newNode = (struct node*) malloc(sizeof(struct node*));
      newNode->data = value;
      head->leftChild = newNode;
      return;
    }
    insertValueWithRoot(head->leftChild, value);
  }

}

void insertValue(int value){
  insertValueWithRoot(&root, value);
}

void inorder(struct node* head){
  if(head == NULL){
    return;
  }
  inorder(head->leftChild);
  inorder(head->rightChild);
  printf("%d ",head->data);
}

void invert(struct node* n){

  if(n == NULL){
    return;
  }

  struct node* temp = n->rightChild;
  n->rightChild = n->leftChild;
  n->leftChild = temp;

  invert(n->leftChild);
  invert(n->rightChild);
}

int main(){
  for(int i=0; i<10; ++i){
    int val;
    scanf("%d",&val);
    insertValue(val);
  }
  inorder(&root);
  printf("\n");
  invert(&root);
  inorder(&root);
  printf("\n");
  return 0;
}
