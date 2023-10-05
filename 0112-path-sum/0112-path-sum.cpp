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
    stack<int>st;
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
        {
            return targetSum==root->val;
        }
        bool flag;
       if(root->left)flag=hasPathSum(root->left,targetSum-root->val);
        if(root->right)flag=flag || hasPathSum(root->right,targetSum-root->val);
        
        return flag;
    }
};