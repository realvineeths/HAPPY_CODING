class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        int n=0;
        
        sort(tokens.begin(),tokens.end());
        int a=0,b=tokens.size()-1,score=0;
        while(a<=b)
        {
            if(tokens[a]<=power)
            {
                score++;
                power-=tokens[a];
                a++;
                n=max(n,score);
            }
            else if(tokens[a]>power and n>0)
            {
                score--;
                power+=tokens[b];
                b--;
            }
            else{
                return n;
            }
        }
        
        
        return n;   
    }
};