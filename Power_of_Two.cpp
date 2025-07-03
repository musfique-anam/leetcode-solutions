class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0){
            return false;
        }

        int logVal = log2 (n);
        return pow(2,logVal) == n;
        if(n){
            return true;
        }else{
            return false;
        }
    }
};