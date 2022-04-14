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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=NULL;
        int carry=0, sum=0;
        string a, b;
        while(l1){
            a.push_back(l1->val+'0');
            l1=l1->next;
        }
        while(l2){
            b.push_back(l2->val+'0');
            l2=l2->next;
        }
        int i=a.size()-1, j=b.size()-1;
        while(i>=0 or j>=0 or carry){
            int sum=( i>=0 ? a[i--]-'0' : 0)+( j>=0 ? b[j--]-'0' : 0)+carry;
            ListNode *temp=new ListNode(sum%10); 
            temp->next=head;
            head=temp;
            carry=sum/10;
        }
        return head;
    }
};