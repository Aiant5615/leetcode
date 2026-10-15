struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (!head) return NULL;
    int length = 1;
    struct ListNode* tail = head;
    while (tail->next) { tail = tail->next; length++; }
    k %= length;
    if (k == 0) return head;
    struct ListNode* newTail = head;
    for (int i = 0; i < length - k - 1; i++) newTail = newTail->next;
    struct ListNode* newHead = newTail->next;
    newTail->next = NULL;
    tail->next = head;
    return newHead;
}
