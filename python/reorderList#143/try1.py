# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        fast = slow = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        
        cur = slow
        prev = None

        while cur:
            nxt_Temp = cur.next
            cur.next = prev

            prev = cur
            cur = nxt_Temp

        l2Cur = prev
        l1Cur = head
        

        while l2Cur.next:
            tmp = l1Cur.next
            l1Cur.next = l2Cur
            l1Cur = tmp

            tmp = l2Cur.next
            l2Cur.next = l1Cur
            l2Cur = tmp

# Time: O(n)
# Space: O(1)
