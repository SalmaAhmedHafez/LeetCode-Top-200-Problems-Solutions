class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);   
        sort(intervals.begin(), intervals.end());  
        
        vector<vector<int>> ans;
        int prev_st = -1, prev_end = -1;
        for (auto i : intervals) {
            int st = i[0], end = i[1];
            if (prev_st == -1) {
                prev_st = st;
                prev_end = end;
            } 
            else {
                if (st <= prev_end) {
                    prev_end = max(end, prev_end);
                }
                else {
                    ans.push_back({prev_st, prev_end});
                    prev_st = st;
                    prev_end = end;
                }
            }
        }

        ans.push_back({prev_st, prev_end});
        return ans;
    }
};