class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sm = 0, mx_sm = -1e9, mn_pre = 0, mx_pre = nums[0], mn_sm = 1e9;
        for(auto num : nums){
            sm += num;
            mx_sm = max({mx_sm, num, sm - mn_pre});
            mn_sm = min({mn_sm, num, sm - mx_pre});
            mn_pre = min(mn_pre, sm);
            mx_pre = max(mx_pre, sm);
        }
        return max(mx_sm, sm - mn_sm);
    }
};