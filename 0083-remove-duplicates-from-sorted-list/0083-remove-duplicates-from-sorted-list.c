struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* node = head;
    while (node && node->next) {
        if (node->next->val == node->val) node->next = node->next->next;
        else node = node->next;
    }
    return head;
}
