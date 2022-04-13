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
    ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
        ListNode* fast=a, *slow=b;
        while(fast != slow){
            fast=fast?fast->next:b;
            slow=slow?slow->next:a;
        }
        return slow;
    }
};