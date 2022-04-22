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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root || (!root->left and !root->right)) return 0;
        queue<pair<TreeNode*,int>> q;
        
        q.push({root,0});
        int ans=0;
        while(q.size()){
            int n=q.size();
            for(int i=0;i<n;i++){
                root=q.front().first;
                int x=q.front().second;
                q.pop();
                if(x and !root->left and !root->right) ans+=root->val;
                if(root->left) q.push({root->left,1});
                if(root->right) q.push({root->right,0});
            }
        }
        return ans;
    }
};