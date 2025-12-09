class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map <char, string> mp;
        map <string, char> used_string;
        map <char, bool> used;

        vector <string> v;
        string tmp = "";
        for(auto i : s){
            if(i != ' ') tmp += i;
            else{
                v.push_back(tmp);
                tmp = "";
            }
        }
        v.push_back(tmp);
        if(v.size() != pattern.size()) return false;

        for(int i = 0; i < v.size(); i++){
            if(!used[pattern[i]] && !used_string[v[i]]){
                used[pattern[i]] = 1;
                used_string[v[i]] = pattern[i];
                mp[pattern[i]] = v[i];
            }
            else{
                if(mp[pattern[i]] != v[i]) return false;
            }
        }
        return true;
    }
};