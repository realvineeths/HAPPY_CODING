class Solution {
public:
    bool isPossible(vector<int>& nums) {
        map<int,int>left,end;
        
        for(auto a:nums)    left[a]++;
        
        for(int i:nums)
        {
            if(left[i]==0)  continue;
            left[i]--;
            if(end[i-1]>0)//just increasing the subsequence
            {
                end[i-1]--;
                end[i]++;
            }
            else if(left[i+1]>0 && left[i+2]>0)//forming a new subsequence
            {
                left[i+1]--;
                left[i+2]--;
                end[i+2]++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};