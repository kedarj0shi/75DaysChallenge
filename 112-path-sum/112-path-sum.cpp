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
    bool help(TreeNode* root, int t){
        if(!root->left and !root->right){
            if(t==0) return 1;
            return 0;
        }
        bool f=0;
        if(root->left)
            f=f || help(root->left,t-root->left->val);
        if(root->right)
            f=f || help(root->right,t-root->right->val);
        return f;
    }
    bool hasPathSum(TreeNode* root, int t) {
        if(!root) return 0;
        return help(root,t-root->val);
    }
};