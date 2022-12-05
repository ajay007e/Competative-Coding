# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        tail = head
        i = 0
        while tail!=None:
            tail = tail.next
            i += 1
        if i%2 == 0 : i = ((i/2) + 1)
        else: i = (i+1)/2
        tail = head
        
        while i>1:
            print(i,tail.val)
            tail = tail.next
            i -=1
        return tail


# class Solution:
#     def middleNode(self, head):
#         slow = fast = head
#         while fast and fast.next:
#             slow = slow.next
#             fast = fast.next.next
#         return slow
        