class Solution {
public:
    int mySqrt(int x) {
        int l = 1, r = x, mid, ans;
        if(x < 2) return x;
        while(l <= r){
            mid = l+(r-l)/2;
            if(x / mid >= mid){
                ans = mid;
                l = mid+1;
            }
            else
                r = mid-1;
        }
        return ans;
    }
};