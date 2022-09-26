// class Solution {
// private:
//     int unionarr[26];
//     int find(int x)
//     {
//         return unionarr[x]==x?x:(unionarr[x] = find(unionarr[x]));
        
//     }
    
// public:
//     bool equationsPossible(vector<string>& equations) {
//         for(int i=0;i<26;i++)
//         {
//             unionarr[i]=i;
//         }
//         for(int i=0;i<equations.size();i++)
//         {
//             if(equations[i][1]=='=')
//             {
//                 unionarr[find(equations[i][0]-'a')]=unionarr[equations[i][3]-'a'];
                
//             }
//         }
        
//         for(auto e : equations)
//         {
//             if(e[1]=='!' and  find(e[0]-'a')  == find(e[3]-'a'))   return false;
            
//         }
//         return true;
//     }
// };

class Solution {
    int uf[26];
    int find(int x) {
        return uf[x] == x ? x : (uf[x] = find(uf[x]));
    }
public:
    bool equationsPossible(vector<string>& equations) {
        for (int i = 0; i < 26; ++i) uf[i] = i;
        for (auto e : equations) {
            if (e[1] == '=') uf[find(e[0] - 'a')] = find(e[3] - 'a'); 
        }
        for (auto e : equations) {
            if (e[1] == '!' && find(e[0] - 'a') == find(e[3] - 'a')) return false;
        }
        return true;
    }
};