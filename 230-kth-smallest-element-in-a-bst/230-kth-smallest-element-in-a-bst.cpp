/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void help(TreeNode* root, priority_queue<int>& pq,int k){
        if(!root) return ;
        pq.push(root->val);
        if(pq.size()>k) pq.pop();
        help(root->left,pq,k);
        help(root->right,pq,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int> pq;
        if(!root) return 0;
        help(root,pq,k);
        return pq.top();
    }
};