class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        string ans;
        int n = a.size(), m = b.size();
        for(int i = 0; i < max(n, m); i++){
            int digit = (i < n ? a[i] - '0' : 0) + (i < m? b[i]-'0' : 0) + carry;
            carry = digit / 2;
            ans.push_back((char)( (digit%2) + '0'));
        }
        if(carry) ans.push_back('1');
        reverse(ans.begin(), ans.end());
        return ans;
    }
};