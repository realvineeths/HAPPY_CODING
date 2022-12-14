class Solution {
public:
    bool validUtf8(vector<int>& data) {
        
        int count=0;
        for(auto a: data)
        {
            if(count==0)
            {
                if((a>>5)==0b110)   count=1;
                else if((a>>4)==0b1110) count=2;
                else if((a>>3)==0b11110)    count=3;
                else if((a>>7)) return false;
            }
            else{
                
                if((a>>6)!=0b10)    return false;
                count--;                
            }    
  
        }
        
        
        return count==0;
    }
};