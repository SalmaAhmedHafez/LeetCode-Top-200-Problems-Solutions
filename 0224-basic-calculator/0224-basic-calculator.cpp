class Solution {
public:
    int calculate(string s) {
        stack <int> st;
        int ve = 1;
        long long ans = 0, x = 0;
        st.push(1);
        for(auto ch : s){
            if(ch == '(') st.push(st.top() * ve), x = 0, ve = 1;
            else if(ch == ')') st.pop(), x = 0, ve = 1;
            else if(ch == '-') ve = -1, x = 0;
            else if(ch == '+') ve = 1, x = 0;
            else{
                if(ch != ' '){
                    if(x > 0) ans -= x * st.top() * ve;
                    x = x * 10 + (ch - '0');
                    ans += st.top() * ve * x;
                }
            }
        }
        return ans;
    }
};