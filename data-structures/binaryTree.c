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

void deleteValue(struct node* head, int value){
  //TODO add implementation
}

int isValuePresent(struct node* head, int value){
  if(head == NULL){
    return -1;
  }
  if(head->data == value){
    return 0;
  }
  if(head->data > value){
    return isValuePresent(head->leftChild, value);
  }
  else{
    return isValuePresent(head->rightChild, value);
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
  printf("%d\n",isValuePresent(head,3));
  printf("%d\n",isValuePresent(head,7));
  printf("%d\n",isValuePresent(head,8));
  return 0;
}
