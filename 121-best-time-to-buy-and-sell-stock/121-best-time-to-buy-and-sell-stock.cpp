class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profitsofar=0,profitmax=0,ans=0;
        // priority_queue<int>pq;
        for(int i=1;i<prices.size();i++)
        {
            profitsofar=max(0,profitsofar+=prices[i]-prices[i-1]);
            
            profitmax=max(profitmax,profitsofar);
            // cout<<profitmax<<" ";
            // pq.emplace(profitmax);
        }        
        return profitmax;
    }
};