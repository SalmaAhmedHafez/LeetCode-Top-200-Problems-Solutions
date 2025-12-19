class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        map <int, int> mp;
        for(auto i : a) mp[i] ++;

        int cnt = 0, pre, mx = 0;
        for(auto i : mp){
            if(cnt == 0){
                cnt = mx = 1;
            }
            else{
                if(i.first - pre == 1){
                    cnt ++;
                    mx = max(cnt, mx);
                }
                else{
                    mx = max(cnt, mx);
                    cnt = 1;
                }
            }
            pre = i.first;
        }
        return mx;
    }
};