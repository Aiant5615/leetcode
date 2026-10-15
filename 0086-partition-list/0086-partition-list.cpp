class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode before, after;
        ListNode* beforeTail = &before;
        ListNode* afterTail = &after;
        for (; head; head = head->next) {
            if (head->val < x) { beforeTail->next = head; beforeTail = head; }
            else { afterTail->next = head; afterTail = head; }
        }
        afterTail->next = nullptr;
        beforeTail->next = after.next;
        return before.next;
    }
};
