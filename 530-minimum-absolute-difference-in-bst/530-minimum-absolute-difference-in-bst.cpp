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
    void help(TreeNode* root, vector<int>&v){
        if(!root) return ;
        help(root->left,v);
        v.push_back(root->val);
        help(root->right,v);
        
    }
    int getMinimumDifference(TreeNode* root) {
        if(!root) return 0;
        vector<int> v;
        int mn=INT_MAX;
        help(root,v);
        // for(int i: v) cout<<i<<" ";
        for(int i=1;i<v.size();i++){
            mn=min(mn,v[i]-v[i-1]);
        }
        return mn;
    }
};