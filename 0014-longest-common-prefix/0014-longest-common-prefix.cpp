class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = 1e4;
        for(auto &str : strs){
            n = min(n, (int)str.size());
        }
        string s = "";
        for(int i = 0; i < n; i++){
            char c = '?';
            for(auto str: strs){
                if(c == '?') c = str[i];
                if(c != str[i]){
                    return s;
                }
            }
            s += c;
        }
        return s;
    }
};