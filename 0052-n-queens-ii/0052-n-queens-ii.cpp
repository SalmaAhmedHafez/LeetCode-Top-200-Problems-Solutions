class Solution {
int ans = 0;

vector <bool> d, dd, col;

void rec(int n, int r){
    if (r == n){
        ans ++;
        return;
    }
    for (int c = 0; c < n; c++){
        if(col[c] || d[r+c] || dd[r-1+n-c]) continue;
        d[r+c] = dd[r-1+n-c] = col[c] = true;
        rec(n, r+1);
        d[r+c] = dd[r-1+n-c] = col[c] = false;
    }

}

public:
    int totalNQueens(int n) {
        col.assign(n+1, false);
        d.assign(2*n+1, false);
        dd.assign(2*n+1, false);
        rec(n, 0);
        return ans;
    }

};