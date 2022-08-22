// class Solution {
// public:
//     bool isPowerOfThree(int n) {
        
//         return fmod(log10(n)/log10(3),1)==0;       
//     }
// };


class Solution { //since 3 is a prime number we could use this method
public:
    bool isPowerOfThree(int n) {
        
        return n>0 && (int)pow(3,19)%n==0;       
    }
};