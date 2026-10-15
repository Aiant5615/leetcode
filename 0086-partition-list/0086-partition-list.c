struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode before = {0, NULL}, after = {0, NULL};
    struct ListNode* beforeTail = &before;
    struct ListNode* afterTail = &after;
    for (; head; head = head->next) {
        if (head->val < x) { beforeTail->next = head; beforeTail = head; }
        else { afterTail->next = head; afterTail = head; }
    }
    afterTail->next = NULL;
    beforeTail->next = after.next;
    return before.next;
}
