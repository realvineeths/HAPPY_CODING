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
    
//     bool helper(TreeNode* root)
//     {
//         if(!root)   return false;    
//         auto left=helper(root->left);
//         auto right=helper(root->right);
//         if(!left)   root->left=NULL;
//         if(!right)  root->right=NULL;
        
//         return root->val==1 or left or right;
        
//     }

    
    TreeNode* pruneTree(TreeNode* root) {
                
        if(!root)   return NULL;
        
        root->left=pruneTree(root->left);
        root->right=pruneTree(root->right);
        
        if(root->val!=1 and root->left==NULL and root->right==NULL){
            root=NULL;
        }
        
        return root;
    }
};
