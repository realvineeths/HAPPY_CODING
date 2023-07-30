//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
	    map<char,int>m;
	    string ans="";
        queue<char>q;

        for(int i=0;i<A.size();i++)
        {
            m[A[i]]++;
            if(q.empty())
            {
                if(m[A[i]]==1)
                {
                    ans.push_back(A[i]);
                    q.push(A[i]);                    
                }
                else
                {
                    ans.push_back('#');   
                }
            }
            else 
            {
                while(!q.empty())
                {
                    char temp=q.front();
                    if(m[temp]>1)
                    {
                        q.pop();
                    }
                    else
                    {
                        ans.push_back(temp);
                        q.push(A[i]);
                        break;
                    }
                }
                
                if(q.empty())
                {
                    ans.push_back('#');
                }
                
            }
            
        }
        
		  return ans;
		}
};




//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends