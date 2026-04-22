class Solution {


vector <int> tmp;
vector <vector<int>> ans;
void rec(int msk, vector<int>& nums){
    if (tmp.size() == nums.size()){
        ans.push_back(tmp);
        return;
    }

    for(int i = 0; i < nums.size(); i++){
        if(!(msk &(1 << i))){
            tmp.push_back(nums[i]);
            rec(msk|(1<<i), nums);
            tmp.pop_back();
        }
    }
}

public:
    vector<vector<int>> permute(vector<int>& nums) {
        rec(0, nums);
        return ans;
    }
};