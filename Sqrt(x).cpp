class Solution {
public:
    int mySqrt(int x) {
        double r=sqrt(x);
        double ans= floor(r);
        return ans;
    }
};