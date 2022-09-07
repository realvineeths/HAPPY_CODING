class Solution {
public:
    
    bool helper(string s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])  return false;
            i++;
            j--;
        }
        return true;
        
    }
    
    int countSubstringshelp(string s) {//RECURSION
        
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {

                if(helper(s,i,j))   ans++;
            }
        }
        return ans;
    }
    
    int helperMem(string s,int i,int j,vector<vector<int>>&dem)
    {
        if(dem[i][j]>=0)   return dem[i][j];
        while(i<j)
        {
            if(s[i]!=s[j])  return dem[i][j]=0;
            i++;
            j--;
        }
        return dem[i][j]=1;
                
    }
    
    int countSubstringsMem(string s) {//MEMOIZATION
        vector<vector<int>>dem(s.size(),vector<int>(s.size(),-1));
        
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {

                if(helperMem(s,i,j,dem))   ans++;
            }
        }
        return ans;
    }
        
    
     int countSubstrings(string s) {//dp
        vector<vector<int>> tab(s.size(), vector<int>(s.size()));
        int count = 0;
        for(int i = s.size() - 1; i >= 0; --i) {
            for(int j = i; j < s.size(); ++j) {
                if (i == j) {
                    tab[i][j] = 1;
                } else if (i + 1 == j) {
                    tab[i][j] = s[i] == s[j] ? 1 : 0;
                } else {
                    tab[i][j] = s[i] == s[j] ? tab[i+1][j-1] : 0;
                }
                count += tab[i][j];
            }
        }
        return count;
    }             
         
    
};