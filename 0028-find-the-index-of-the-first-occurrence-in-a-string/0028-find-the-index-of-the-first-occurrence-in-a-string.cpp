class Solution {
public:
    int strStr(string haystack, string needle) {
        int idx = -1;
        for(int i = 0; i < haystack.size(); i++){
            bool f = 1;
            for(int j = 0; j < needle.size(); j++){
                if(i+j >= haystack.size()) return -1;
                if(haystack[i+j] != needle[j]){
                    f = 0;
                    break;
                }
            }
            if(f) return i;
        }
        return -1;
    }
};