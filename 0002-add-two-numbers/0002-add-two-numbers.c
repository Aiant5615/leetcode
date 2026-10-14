struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode head = {0, NULL};
    struct ListNode* tail = &head;
    int carry = 0;
    while (l1 || l2 || carry) {
        int total = carry;
        if (l1) { total += l1->val; l1 = l1->next; }
        if (l2) { total += l2->val; l2 = l2->next; }
        carry = total / 10;
        struct ListNode* node = malloc(sizeof(struct ListNode));
        node->val = total % 10;
        node->next = NULL;
        tail->next = node;
        tail = node;
    }
    return head.next;
}
