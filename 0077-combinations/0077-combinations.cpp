class Solution {

vector <int> tmp;
vector <vector<int>> ans;

void rec(int i, int k){
    if(tmp.size() == k){
        ans.push_back(tmp);
        return;
    }
    if (i <= 0) return;
    
    tmp.push_back(i);
    rec(i-1, k);
    tmp.pop_back();
    rec(i-1, k);
}

public:
    vector<vector<int>> combine(int n, int k) {
        rec(n, k);
        return ans;
    }
};