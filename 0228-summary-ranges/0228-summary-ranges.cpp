class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector <string> ans;
        if(nums.size() == 0) return ans;

        int lst, st;
        bool f = 0;
        for(auto num : nums){
            if(f == 0){
                lst = st = num;
                f = 1;
            }
            else{
                if(num == (lst + 1) * 1LL){
                    lst = num;
                }
                else{
                    if(st == lst) ans.push_back(to_string(st));
                    else{
                        string tmp = to_string(st);
                        tmp += "->";
                        tmp += to_string(lst);
                        ans.push_back(tmp);
                    }
                    st = lst = num;
                }
            }
        }
        if(st == lst) ans.push_back(to_string(st));
        else{
            string tmp = to_string(st);
            tmp += "->";
            tmp += to_string(lst);
            ans.push_back(tmp);
        }
        return ans;
    }
};