class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map <char, int> s, t;
        for(auto c : ransomNote) s[c] ++;
        for(auto c : magazine) t[c] ++;

        for(auto c : s){
            if(t[c.first] < c.second) return false;
        }
        return true;
    }
};