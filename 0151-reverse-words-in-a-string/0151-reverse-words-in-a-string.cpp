class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();

        int st = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == ' ' || i == n-1) {
                reverse(s.begin() + st, s.begin() + i + (i == n-1)), st = i+1;
            }
        }
        reverse(s.begin(), s.end());
        int idx = 0;
        bool prev = 0;
        for(int i = 0; i < n; i++){
            if(s[i] != ' ' || prev) s[idx ++] = s[i];
            prev = (s[i] != ' ');
        }
        if(s[idx-1] == ' ') idx --;
        s.erase(s.begin() + idx, s.end());
        return s;

    }
};