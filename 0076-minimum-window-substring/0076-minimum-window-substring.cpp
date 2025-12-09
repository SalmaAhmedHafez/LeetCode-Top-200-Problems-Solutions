class Solution {
public:
    string minWindow(string s, string t) {
        map <char, int> tcnt, mp;
        for(auto i : t) tcnt[i] ++;

        int l = 0, r = 0, n = s.length(), m = t.length();
        int ansl, ansr, cnt = 0, sz = 1e6;
        while(l < n){
            while(r < n && cnt < m){
                if(mp[s[r]] < tcnt[s[r]]) cnt ++;
                mp[s[r]] ++;
                r ++;
            }
            if(cnt == m && r-l < sz){
                sz = r - l;
                ansl = l, ansr = r;
            }
            if(mp[s[l]] <= tcnt[s[l]]) cnt --;
            mp[s[l]] --;
            l++; 
        }
        string ans = "";
        if(sz != 1e6){
            for(int i = ansl; i < ansr; i++) ans += s[i];
        }
        return ans;
    }
};