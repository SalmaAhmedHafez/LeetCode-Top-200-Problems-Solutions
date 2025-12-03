class Solution {
public:
    int hIndex(vector<int>& a) {
        sort(a.begin(), a.end(), greater <int>());
        int ans = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] >= i+1){
                ans = i+1;
            }
        }
        return ans;
    }
};