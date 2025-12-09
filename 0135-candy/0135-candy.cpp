class Solution {
public:
    int candy(vector<int>& a) {
        int n = a.size();
        vector <int> pre(n, 1);
        for(int i = 1; i < n; i++){
            if(a[i] > a[i-1]){
                pre[i] = pre[i-1] + 1;
            }
        }

        for(int i = n-2; i >= 0; i--){
            if(a[i] > a[i+1]){
                pre[i] = max(pre[i], pre[i+1]+1);
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++) ans += pre[i];
        return ans;
    }
};