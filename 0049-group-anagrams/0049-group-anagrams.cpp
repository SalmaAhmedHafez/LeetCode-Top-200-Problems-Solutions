class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, int> mp;
        int idx = 0;
        vector <vector <string>> ans;
        for(auto s : strs){
            string tmp = s;
            sort(tmp.begin(), tmp.end());
            if(!mp[tmp]){
                mp[tmp] = ++ idx;
                ans.emplace_back();
            }
            ans[mp[tmp]-1].push_back(s);
        }
        return ans;
    }
};