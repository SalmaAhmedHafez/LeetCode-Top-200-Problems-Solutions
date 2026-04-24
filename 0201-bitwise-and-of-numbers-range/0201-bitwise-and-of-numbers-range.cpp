class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans = 0;
        for(int i = 0; i < 32; i++){
            int msk = (1LL << i);
            if((msk&left) && (msk&right) && (right-left+1) <= msk){
                ans += msk;
            }
        }
        return ans;
    }
};