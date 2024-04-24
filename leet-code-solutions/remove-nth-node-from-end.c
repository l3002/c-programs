struct ListNode *removeNthFromEnd(struct ListNode *head, int n) {
  int size = 0;
  struct ListNode *ptr = head;
  while (ptr != NULL) {
    size++;
    ptr = ptr->next;
  }
  int valDel = size - n;
  int index = 1;
  ptr = head;
  while (index <= valDel) {
    if (index == valDel) {
      ptr->next = ptr->next->next;
    }
    ptr = ptr->next;
    index++;
  }
  if (valDel == 0) {
    head = ptr->next;
  }
  return head;
}
