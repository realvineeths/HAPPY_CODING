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
    
    int countSubstringshelp(string s) {
        
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
        
        // if (i >= j) return 1;
        // if (mem[i][j] >= 0) return mem[i][j];
        // return mem[i][j] = s[i] == s[j] ? helperMem(s, i+1, j-1,mem) : 0;
        
    }
    
    int countSubstrings(string s) {
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
};