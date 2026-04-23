class Solution {
public:
    vector <char> tmp;
    vector <string> ans;

    void rec(int idx, string tmp, string s){
        if (tmp.size() == s.size()){
            ans.push_back(tmp);
            return;
        }

        char st = (char)((s[idx] - '2') * 3 + 'a');
        if (s[idx] > '7') st ++;

        char end = st + 2;
        if (s[idx] == '7' || s[idx] == '9') end ++;

        for(char i = st; i <= end; i++){
            tmp.push_back(i);
            rec(idx+1, tmp, s);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        rec(0, "", digits);
        return ans;
    }
};