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
    ListNode* reverse(ListNode* head){
        ListNode *prev=NULL, *next=NULL, *curr=head;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {   
        if(head==NULL or head->next==NULL)
            return 1;
        ListNode* fast=head, *slow=head;
        ListNode* curr=head;
        
        while(fast->next and fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        
        while(curr and slow){
            if(curr->val != slow->val)
                return 0;
            curr=curr->next;
            slow=slow->next;
        }        
        return 1;
    }
};