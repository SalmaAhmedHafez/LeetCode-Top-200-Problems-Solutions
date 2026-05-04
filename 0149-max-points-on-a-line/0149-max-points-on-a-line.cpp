class Solution {
public:
    int maxPoints(vector<vector<int>>& a) {
        int ans = 1, n = a.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int cnt = 0;
                for(int k = 0; k < n; k ++){
                    if ( (a[i][0]-a[j][0])*(a[i][1]-a[k][1]) ==  (a[i][0]-a[k][0])*(a[i][1]-a[j][1]) ){
                        cnt ++;
                    }
                }
                ans = max(ans, cnt);
            }
        }
        return ans;
    }
};