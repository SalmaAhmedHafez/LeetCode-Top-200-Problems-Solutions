class Solution {
public:
    int trap(vector<int>& a) {
        int n = a.size();
        vector <int> suff(n+1);
        for(int i = n-1; i >= 0; i--){
            suff[i] = max(suff[i+1], a[i]);
        }
        int pre = 0, ans = 0;
        for(int i = 0; i < n; i++){
            if(pre > a[i] && suff[i+1] > a[i]){
                ans += min(pre, suff[i+1]) - a[i];
            }
            pre = max(pre, a[i]);
        }
        return ans;
    }
};