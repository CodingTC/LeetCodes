# this is the better solution and more optimal

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        fast = head
        slow = head

        while(fast and fast.next):
            slow = slow.next
            fast = fast.next.next

        return slow
        
# Time: O(n)
# Space: O(1)

# This is the optimal solution
