class Solution:
    def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
        before = before_tail = ListNode()
        after = after_tail = ListNode()
        while head:
            if head.val < x:
                before_tail.next = head
                before_tail = head
            else:
                after_tail.next = head
                after_tail = head
            head = head.next
        after_tail.next = None
        before_tail.next = after.next
        return before.next
