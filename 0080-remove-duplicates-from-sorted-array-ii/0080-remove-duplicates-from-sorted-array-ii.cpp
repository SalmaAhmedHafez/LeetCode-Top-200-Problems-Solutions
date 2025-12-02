class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int idx = 1;
        int cnt = 1;
        for(int i = 1; i < a.size(); i++){
            if(a[i] == a[idx-1]){
                cnt ++;
                if(cnt <= 2){
                    a[idx ++] = a[i];
                }
            }
            else{
                cnt = 1;
                a[idx ++] = a[i];
            }
        }
        return idx;
    }
};