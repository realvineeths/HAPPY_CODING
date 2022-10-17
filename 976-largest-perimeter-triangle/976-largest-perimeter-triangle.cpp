class Solution {
public:
    
    
    int largestPerimeter(vector<int>& nums) {
          
        sort(nums.begin(),nums.end(),greater<>());
        
        
        for(int i=0;i<nums.size()-2;i++)
        {
            int dem=0;
            dem=nums[i+1]+nums[i+2];
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