class Solution {
public:
    long long reverseBits(int n) {
        long long ans = 0;
        for (int i = 0; i < 32; i++){
            long long msk = ((1LL << i) & n);
            if (msk)
                ans += (1LL << (31 - i));
        }
        return ans;
    }
};