/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        if(!head )   return head;
        if(!head->next) return NULL;
        ListNode *fast,*slow,*prev;
        fast=head,slow=head;
        prev=NULL;
        while(fast and fast->next)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;            
        }
        
        prev->next=slow->next;
        delete(slow);
        return head;
    }
};