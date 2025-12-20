class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sm = 0, mx_sm = -2e4, mn_pre = 0;
        for(auto num : nums){
            sm += num;
            mx_sm = max({num, mx_sm, sm - mn_pre});
            mn_pre = min(mn_pre, sm);
        }
        return mx_sm;
    }
};