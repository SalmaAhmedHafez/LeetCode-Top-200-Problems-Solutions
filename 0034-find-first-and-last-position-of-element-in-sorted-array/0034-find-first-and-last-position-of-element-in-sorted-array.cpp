class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int idx1 = -1, idx2 = -1;
        auto it = lower_bound(nums.begin(), nums.end(), target);
        if(it != nums.end() && (*it == target)) idx1 = it - nums.begin();
        it = lower_bound(nums.begin(), nums.end(), target+1);
        if(it != nums.begin()) it--;
        if(it != nums.end() && (*it == target)) idx2 = it - nums.begin();
        return {idx1, idx2};
    }
};