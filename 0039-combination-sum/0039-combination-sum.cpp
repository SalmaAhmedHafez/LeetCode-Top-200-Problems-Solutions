class Solution {
    vector <int> curr;
    vector <vector <int>> ans;

    void rec(int idx, int sm, vector <int> &candidates, int target){
        if(sm == target){
            ans.push_back(curr);
            return;
        }
        if(idx >= candidates.size() || sm > target) return;
        sm += candidates[idx];
        curr.push_back(candidates[idx]);
        rec(idx, sm, candidates, target);

        sm -= candidates[idx];
        curr.pop_back();
        rec(idx+1, sm, candidates, target);
    
    }


public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        rec(0, 0, candidates, target);
        return ans;
    }
};