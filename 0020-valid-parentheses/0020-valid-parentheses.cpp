class Solution {
public:
    bool isValid(string s) {
        stack <int> st;
        for(auto i : s){
            if(!st.empty()){
                int j = st.top();
                if((i == ')' && j == '(') ||
                 (i == '}' && j == '{') ||
                 (i == ']' && j == '[')){
                    st.pop();
                }
                else{
                    st.push(i);
                }
            }
            else{
                st.push(i);
            }
        }
        return st.empty();
    }
};