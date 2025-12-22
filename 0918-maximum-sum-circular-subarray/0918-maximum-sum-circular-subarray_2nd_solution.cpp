class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sm = 0, mx = -1e9, mn_pre = 0, n = nums.size();
        for(auto num : nums){
            sm += num;
            mx = max({mx, num, sm - mn_pre});
            mn_pre = min(mn_pre, sm);
        }
        vector <int> mx_pre(n);
        int pre = 0;
        for(int i = 0; i < n; i++){
            pre += nums[i];
            mx_pre[i] = pre;
            if(i) mx_pre[i] = max(mx_pre[i-1], mx_pre[i]);  
        }
        pre = 0;
        for(int i = n-1; i > 0; i--){
            pre += nums[i];
            mx = max(mx, pre + mx_pre[i-1]);
        }

        return mx;
    }
};