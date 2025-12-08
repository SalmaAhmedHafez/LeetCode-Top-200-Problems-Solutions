class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int l = 0, r = 0, n = a.size();
        int ans = 1e6;
        int sm = 0;
        while(l < n){
            while(r < n && sm < target){
                sm += a[r];
                r ++;
            }
            if(sm >= target) ans = min(ans, r - l);
            sm -= a[l ++];
        }
        if(ans == 1e6) ans = 0;
        return ans;
    }
};