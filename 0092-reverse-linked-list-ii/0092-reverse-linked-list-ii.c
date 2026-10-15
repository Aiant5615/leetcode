struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    struct ListNode dummy = {0, head};
    struct ListNode* prev = &dummy;
    for (int i = 1; i < left; i++) prev = prev->next;
    struct ListNode* cur = prev->next;
    for (int i = 0; i < right - left; i++) {
        struct ListNode* moved = cur->next;
        cur->next = moved->next;
        moved->next = prev->next;
        prev->next = moved;
    }
    return dummy.next;
}
