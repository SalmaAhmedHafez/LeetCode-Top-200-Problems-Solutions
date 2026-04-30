class Solution {

int cnt_x(int n, int x){
    if(n == 0) return 0;
    int cnt = 0;
    while(n % x == 0){
        cnt ++;
        n /= x;
    }
    return cnt;
}


public:
    int trailingZeroes(int n) {
        int cnt2 = 0, cnt5 = 0;
        for(int i = 2; i <= n; i++){
            cnt2 += cnt_x(i, 2);
            cnt5 += cnt_x(i, 5);
        }
        return min(cnt2, cnt5);
    }
};