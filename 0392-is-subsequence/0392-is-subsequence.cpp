class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length(), m = t.length();

        int sidx = 0, tidx = 0;
        while(sidx < n && tidx < m){
            if(s[sidx] == t[tidx]) sidx ++;
            tidx ++;
        }
        return sidx == n;
    }
};