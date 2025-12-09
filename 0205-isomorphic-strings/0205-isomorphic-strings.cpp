class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map <char, char> mp;
        map <char, bool> used_s, used_t;

        for(int i = 0; i < s.length(); i++){
            if(!used_t[t[i]] && !used_s[s[i]]){
                mp[s[i]] = t[i];
                used_t[t[i]] = used_s[s[i]] = 1;
            }
            else{
                if(mp[s[i]] != t[i]){
                    return false;
                }
            }
        }
        return true;
    }
};