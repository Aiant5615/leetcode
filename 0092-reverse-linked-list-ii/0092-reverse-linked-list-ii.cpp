class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode dummy(0, head);
        ListNode* prev = &dummy;
        for (int i = 1; i < left; i++) prev = prev->next;
        ListNode* cur = prev->next;
        for (int i = 0; i < right - left; i++) {
            ListNode* moved = cur->next;
            cur->next = moved->next;
            moved->next = prev->next;
            prev->next = moved;
        }
        return dummy.next;
    }
};
