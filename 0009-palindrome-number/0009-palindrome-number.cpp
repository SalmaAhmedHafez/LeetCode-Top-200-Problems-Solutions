class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        vector <int> d;
        while(x){
            d.push_back(x%10);
            x/=10;
        }
        for(int i = 0; i < d.size()/2; i++){
            if(d[i] != d[d.size()-i-1]){
                return false;
            }
        }
        return true;
    }
};