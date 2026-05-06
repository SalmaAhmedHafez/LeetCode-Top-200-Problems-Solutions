class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = 2*nums.size()-2, mid, ans=5001;
        while(l <= r){
            mid = l + (r-l)/2;
            if(mid >= nums.size()) r = mid-1;
            else{
                if(nums[mid] < ans){
                    ans = nums[mid];
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
        }
        return ans;
    }
};