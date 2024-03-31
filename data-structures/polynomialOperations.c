#include <stdio.h>
#include <stdlib.h>

struct node {

  int exponent;
  int coefficient;
  struct node *next;

} *head;

void addPolynomial(int coeffArr1[], int expArr1[], int size1, int coeffArr2[],
                   int expArr2[], int size2) {
  head->coefficient = coeffArr1[0];
  head->exponent = expArr1[0];
  struct node *current = head;
  for (int i = 1; i < size1; ++i) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->coefficient = coeffArr1[i];
    newNode->exponent = expArr1[i];
    current->next = newNode;
    current = newNode;
  }
  current = head;
}

int main() { return 0; }
