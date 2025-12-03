class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n = a.size();
        vector <int> ans(n);
        int pre = 1;
        for(int i = 0; i < n; i++){
            ans[i] = pre;
            pre *= a[i];
        }
        int suff = 1;
        for(int i = n-1; i >= 0; i--){
            ans[i] *= suff;
            suff *= a[i];
        }
        return ans;
    }
};