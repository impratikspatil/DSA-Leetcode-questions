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
    set<int>st; // by default increasing order 
    int findSecondMinimumValue(TreeNode* root) {

        if(root==NULL)
            return 0;
        
        findSecondMinimumValue(root->left);
        st.insert(root->val);
        findSecondMinimumValue(root->right);
        
        if(st.size()<2)
            return -1;
                
        int cnt=1;
        int res;
        for(auto i:st)
        {
            if(cnt==0)
            {
                res=i;
            }
            cnt--;
            
        }
        
        return res;
        
       
    }
};