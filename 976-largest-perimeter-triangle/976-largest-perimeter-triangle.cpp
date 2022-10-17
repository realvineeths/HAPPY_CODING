class Solution {
public:
    
    
    int largestPerimeter(vector<int>& nums) {
        
        // int sum=0,maxnum=0;
        // for(auto a:nums)    sum+=a;
        
        // for(auto a:nums)    maxnum=max(maxnum,a);
        
        // sum-=maxnum;
        // if(maxnum>=sum) return 0;
        
        sort(nums.begin(),nums.end(),greater<>());
        
        
        for(int i=0;i<nums.size()-2;i++)
        {
            int dem=0;
            dem=nums[i+1]+nums[i+2];
            cout<<dem<<' ';
            if(nums[i]>=dem)
            {
                continue;
            }
            else{
                return (dem+nums[i]);
            }
        }
        
        return 0;
    }
};