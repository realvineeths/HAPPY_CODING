class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>arr(nums.begin(),nums.end());
                
        int curnum=0;
        int count=0,longcount=0;
        for(auto a:arr){
            if(arr.find(a-1)==arr.end()){
                count=1;
                curnum=a;               
                while(arr.find(curnum+1)!=arr.end())
                {
                    count++;
                    curnum++;
                }
                
            }
            longcount=max(longcount,count);
        }
        return longcount;
    }
};
