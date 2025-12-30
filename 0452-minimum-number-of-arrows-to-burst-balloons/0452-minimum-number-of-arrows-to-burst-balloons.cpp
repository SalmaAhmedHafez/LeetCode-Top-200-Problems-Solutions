class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int mn_end = points[0][1], ans = 1;
        for(int i = 0; i < points.size(); i++){
            if(points[i][0] <= mn_end){
                mn_end = min(mn_end, points[i][1]);
            }
            else{
                ans ++;
                mn_end = points[i][1];
            }
        } 
        return ans;
    }
};