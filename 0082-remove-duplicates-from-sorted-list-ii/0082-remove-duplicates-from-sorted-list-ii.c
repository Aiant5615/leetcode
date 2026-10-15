struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode dummy = {0, head};
    struct ListNode* prev = &dummy;
    while (head) {
        if (head->next && head->next->val == head->val) {
            while (head->next && head->next->val == head->val) head = head->next;
            prev->next = head->next;
        } else {
            prev = prev->next;
        }
        head = head->next;
    }
    return dummy.next;
}
