# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return head

        cur = head
        nxt = cur.next
        cur.next = None

        while(nxt):
            nextNxt = nxt.next
            nxt.next = cur

            cur = nxt
            nxt = nextNxt

        return cur


# Time: O(n)
# Space: O(1)
