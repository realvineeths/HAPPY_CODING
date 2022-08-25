class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map<char,int>m1;
        
        for(auto a:magazine)
        {
            m1[a]++;            
        }
        
        for(auto c:ransomNote)
        {
            if(m1[c]--==0)  return false;
            
        }
        return true;
    }
};