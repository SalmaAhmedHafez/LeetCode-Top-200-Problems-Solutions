class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sm = 0, idx = 0, total = 0;
        for(int i = 0; i < gas.size(); i++){
            sm += gas[i] - cost[i];
            total += gas[i] - cost[i];
            if(sm < 0) idx = i+1, sm = 0;
        }
        if(total < 0) return -1;
        return idx;
    }
};