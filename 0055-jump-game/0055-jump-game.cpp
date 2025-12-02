class Solution {
public:
    bool canJump(vector<int>& a) {
        int sm = 0;
        for(auto i : a) sm += i;
        for(int i = 0; i < a.size()-1; i++){
            if(a[i] == 0){
                bool f = 0;
                for(int j = i-1; j >= 0; j--){
                    if(a[j] > i - j){
                        f = 1;
                        break;
                    }
                }
                if(f == 0) return false;
            }
        }
        return sm >= a.size()-1;
    }
};