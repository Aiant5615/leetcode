static struct ListNode* merge(struct ListNode* a, struct ListNode* b) {
    struct ListNode head = {0, NULL};
    struct ListNode* tail = &head;
    while (a && b) {
        if (a->val <= b->val) { tail->next = a; a = a->next; }
        else { tail->next = b; b = b->next; }
        tail = tail->next;
    }
    tail->next = a ? a : b;
    return head.next;
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    if (listsSize == 0) return NULL;
    for (int step = 1; step < listsSize; step *= 2)
        for (int i = 0; i + step < listsSize; i += 2 * step)
            lists[i] = merge(lists[i], lists[i + step]);
    return lists[0];
}
