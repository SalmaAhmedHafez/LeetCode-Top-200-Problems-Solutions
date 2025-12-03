class Solution {
public:
    int jump(vector<int>& a) {
        int mx, cnt = 0, idx = 0, n = a.size();
        while(idx < n-1){
            int bst_idx = idx, mx = 0;
            if(a[idx] + idx >= n-1) return cnt + 1;
            for(int i = idx+1; i <= min(n-1, idx + a[idx]); i ++){
                if(a[i] + i >= mx){
                    mx = a[i] + i;
                    bst_idx = i;
                }
            }
            cnt ++;
            idx = bst_idx;
        }
        return cnt;
    }
};