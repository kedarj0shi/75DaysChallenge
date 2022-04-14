/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL or head->next==NULL) return NULL;
        ListNode* fast=head, *slow=head, *start=head;
        
        while(fast->next and fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                while(slow!=start){
                    start=start->next;
                    slow=slow->next;
                }
                return start;
            }
        }
        return NULL;
    }
};