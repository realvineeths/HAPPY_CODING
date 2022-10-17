class Solution {
public:
    
    
    int largestPerimeter(vector<int>& nums) {
          
        sort(nums.begin(),nums.end(),greater<>());
        
        
        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i]>=nums[i+1]+nums[i+2])
            {
                continue;
            }
            else{
                return (nums[i+1]+nums[i+2]+nums[i]);
            }
        }
        
        return 0;
    }
};