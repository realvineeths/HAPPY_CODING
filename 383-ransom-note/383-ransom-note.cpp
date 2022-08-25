class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        // map<char,int>m1;
        int m1[26]={0};
        
        for(auto a:magazine)
        {
            m1[a-'a']++;            
        }
        
        for(auto c:ransomNote)
        {
            if(m1[c-'a']--==0)  return false;
            
        }
        return true;
    }
};