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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if(!a) return b;
        if(!b) return a;
        
        ListNode* head;
        if(a->val < b->val){
            head=a;
            a=a->next;
        }
        else{
            head=b;
            b=b->next;
        }
        
        ListNode* temp=head;
        
        while(a and b){
            if(a->val < b->val){
                temp->next=a;
                a=a->next;
            }
            else{
                temp->next=b;
                b=b->next;
            }
            temp=temp->next;
        }
        
        if(a)
            temp->next=a;
        else
            temp->next=b;
        
        return head;
    }
};