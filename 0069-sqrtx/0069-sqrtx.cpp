class Solution {
public:
    int mySqrt(int x) {
        int ans = x/2;
        if(x < 2) return x;
        for(int i = 1; i <= x/2; i++){
            if((x / i) < i) return i-1;
        }
        return ans;
    }
};