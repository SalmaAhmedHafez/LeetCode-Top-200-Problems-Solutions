class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map <char, int> mp;
        int n = s.length();

        int l = 0, r = 0, ans = 0;
        while(l < n){
            while(r < n && mp[s[r]] == 0){
                ans = max(ans, r - l + 1);
                mp[s[r++]] ++;
            }
            mp[s[l++]] --;
        }
        return ans;
    }
};