class Solution {
public:
    
    
    void rotate(vector<vector<int>>& matrix) {
     
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i;j<matrix.size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);   
            }
        }
        
        for(int k=0;k<matrix.size();k++)
        {
            reverse(matrix[k].begin(),matrix[k].end());   
        }
        
    }
};