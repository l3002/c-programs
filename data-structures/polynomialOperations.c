#include <stdio.h>
#include <stdlib.h>

struct node {

  int exponent;
  int coefficient;
  struct node *next;

} *head;

void addPolynomial(int coeffArr1[], int expArr1[], int size1, int coeffArr2[],
                   int expArr2[], int size2) {
  head = (struct node *)malloc(sizeof(struct node));
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
  int index = 0;
  while (current != NULL) {
    if (current->exponent == expArr2[index]) {
      current->coefficient += coeffArr2[index];
      index++;
      current = current->next;
      continue;
    }
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->coefficient = coeffArr2[index];
    newNode->exponent = expArr2[index];
    if (current->exponent > expArr2[index] && current->next == NULL) {
      current->next = newNode;
      current = newNode;
      index++;
    } else if (current->exponent > expArr2[index] &&
               current->next->exponent < expArr2[index]) {
      newNode->next = current->next;
      current->next = newNode;
      current = newNode;
      index++;
    } else if (current == head && current->exponent < expArr2[index]) {
      newNode->next = head;
      current = head = newNode;
      index++;
    } else {
      current = current->next;
    }
  }
  current = head;
  while (current != NULL) {
    if (current != head) {
      printf(" + ");
    }
    printf("%dx^%d", current->coefficient, current->exponent);
    current = current->next;
  }
  printf("\n");
}

int main() {
  int coeffArr1[] = {4, 3, 1};
  int expArr1[] = {3, 1, 0};
  int size1 = 3;
  int coeffArr2[] = {5, 5, 2, 2};
  int expArr2[] = {4, 2, 1, 0};
  int size2 = 4;
  printf("The addition of 4x^3 + 3x^1 + 1x^0 and 5x^4 + 5x^2 + 2x^1 + 2x^0 "
         "results in ");
  addPolynomial(coeffArr1, expArr1, size1, coeffArr2, expArr2, size2);
  return 0;
}
