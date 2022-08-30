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
    int widthOfBinaryTree(TreeNode* root) {
        
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        long ans=0;
        while(!q.empty())
        {
            int sz=q.size();
            long frontidx=q.front().second;
            long backidx=q.back().second;
            ans=max(ans,backidx-frontidx+1);
            for(int i=0;i<sz;i++)
            {
                auto dem=q.front();
                q.pop();
                long long id=dem.second;
                if(dem.first->left)   q.push({dem.first->left,2*id+1});
                
                if(dem.first->right)  q.push({dem.first->right,2*id+2});
                
            }            
        }
        return ans;
        
    }
};