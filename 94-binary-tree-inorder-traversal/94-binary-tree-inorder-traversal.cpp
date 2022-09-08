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
// class Solution {
// public:
//     stack<TreeNode*>st;
//     vector<int>ans;
    
//     vector<int> inorderTraversal(TreeNode* root) {
        
//         if(!root)   return {};
        
//         inorderTraversal(root->left);
//         ans.push_back(root->val);
//         inorderTraversal(root->right);
        
//         return ans;
//     }
// };

class Solution {
public:    
    vector<int> inorderTraversal(TreeNode* root) {
        
        stack<TreeNode*>st;
        vector<int>ans;

        while(root or !st.empty())
        {
            while(root)
            {
                st.push(root);
                root=root->left;                
            }
            root=st.top();
            st.pop();
            ans.push_back(root->val);
            root=root->right;
        }        
        
        return ans;
    }
};
