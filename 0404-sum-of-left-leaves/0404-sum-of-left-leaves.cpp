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
    int leftsum=0;
public:
    int sum=0;
    int sumOfLeftLeaves(TreeNode* root) {
        
        helper(root);
        return leftsum;
    }
    
    void helper(TreeNode * root)
    {
        if (root==NULL)return;
        if(isLeafChild(root->left)){
            leftsum+=root->left->val;
        }
        helper(root->left);
        helper(root->right);
    }
    
    bool isLeafChild(TreeNode *root)
    {
        if(root==NULL) return false;
        if(root->left==NULL && root->right==NULL)return true;
        
        return false;
    }
    
    
};