class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int n = nums.size(), m = nums[0].size();
        int l = 0, r = n*m-1, mid;
        while(l <= r){
            mid = (l + r) / 2;
            int tmp = nums[mid / m][mid % m];
            if(tmp == target) return true;
            if(tmp > target) r = mid - 1;
            else l = mid + 1;
        }  
        return false;
    }
};