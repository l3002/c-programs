#include <stdio.h>
#include <stdlib.h>

struct node{

  int data;
  struct node *rightChild;
  struct node *leftChild;

};


void insertValue(struct node* head, int value){
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
    insertValue(head->rightChild, value);
  }
  if(head->data >= value){
    if(head->leftChild == NULL){
      struct node *newNode = (struct node*) malloc(sizeof(struct node*));
      newNode->data = value;
      head->leftChild = newNode;
      return;
    }
    insertValue(head->leftChild, value);
  }
}

void inorder(struct node* head){
  if(head == NULL){
    return;
  }
  inorder(head->leftChild);
  inorder(head->rightChild);
  printf("%d ",head->data);
}

int main(){
  struct node *head =(struct node *) malloc(sizeof(struct node*));
  insertValue(head,3);
  insertValue(head,5);
  insertValue(head,1);
  insertValue(head,7);
  inorder(head);
  printf("\n");
  return 0;
}
