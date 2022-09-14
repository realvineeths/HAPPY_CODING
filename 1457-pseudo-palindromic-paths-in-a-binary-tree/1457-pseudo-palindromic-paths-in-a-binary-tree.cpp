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
    map<int,int>m1;
    int res=0;
    void helper(TreeNode* root)
    {
        if(!root)   return;
        
        m1[root->val]++;
        if(!root->right and !root->left)
        {
            int odd=0;
            
            for(auto a:m1)
            {
                if(a.second%2==1)   odd++;
            }
            if(odd<=1)  res++;
            
        }
        
        helper(root->left);
        helper(root->right);
        m1[root->val]--;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        
        if(!root->left and !root->right)    return 1;
        
        helper(root);
        
        return res;
    }
};    
