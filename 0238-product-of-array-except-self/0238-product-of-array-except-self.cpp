class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n = a.size();
        vector <int> ans(n);
        ans[n-1] = a[n-1];
        for(int i = n-2; i >= 0; i--){
            ans[i] = a[i] * ans[i+1];
        }
        for(int i = 1; i < n; i++){
            a[i] = a[i] * a[i-1];
        }
        ans[0] = ans[1];
        for(int i = 1; i < n-1; i++){
            ans[i] = a[i-1] * ans[i+1];
        }
        ans[n-1] = a[n-2];
        return ans;
    }
};