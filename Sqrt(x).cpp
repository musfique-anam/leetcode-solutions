class Solution {
public:
    int mySqrt(int x) {
        float r=sqrt(x);
        int ans= floor(r);
        return ans;
    }
};