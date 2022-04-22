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
    void help(TreeNode* root, TreeNode* &prev, int &mn){
        if(!root) return ;
        help(root->left,prev,mn);
        if(prev!=NULL){
            mn=min(mn,root->val-prev->val);
        }
        prev=root;
        help(root->right,prev,mn);
        
    }
    int getMinimumDifference(TreeNode* root) {
        if(!root) return 0;
        int mn=INT_MAX;
        TreeNode* prev=NULL;
        help(root,prev,mn);
       
        return mn;
    }
};