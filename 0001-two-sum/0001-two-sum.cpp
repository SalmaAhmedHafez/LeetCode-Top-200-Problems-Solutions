class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> mp;
        for(int i = 0; i < nums.size(); i++) mp[nums[i]] = i+1;
        for(int i = 0; i < nums.size(); i++){
            int tmp = mp[target - nums[i]];
            if(tmp != i+1 && tmp > 0){
                return {i, tmp-1};
            }
        }
        return {0, 0};
    }
};