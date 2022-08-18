class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        int n=arr.size(),m=n;
        unordered_map<int,int>m1;
        for(auto a:arr) m1[a]++;
        
        priority_queue<pair<int,int>>pq;
        for(auto a:m1){
            pq.push({a.second,a.first});
        }
        
        while(!pq.empty())
        {
            if(n-pq.top().first<=m/2){
                pq.pop();
                return m1.size()-pq.size();
            }
            n-=pq.top().first;
            pq.pop();                        
        }
      
        return -1;
    }
};
