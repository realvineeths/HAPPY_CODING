lass Solution:
def isPalindrome(self, head: Optional[ListNode]) -> bool:
# ListNode *fast,*slow,*prev
fast,slow,prev=head,head,None
while fast and fast.next!=None:
fast,slow=fast.next.next,slow.next
​
prev,slow,prev.next=slow,slow.next,None
while slow:
slow.next,prev,slow=prev,slow,slow.next
fast,slow=head,prev
while slow:
if(fast.val!=slow.val):  return False
fast,slow=fast.next,slow.next
return True