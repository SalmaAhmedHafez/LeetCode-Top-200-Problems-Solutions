class Solution {
    vector <vector <int>> vis;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    int ans;
    bool can(int i, int j, int n, int m){
        return (i >= 0 && i < n && j >= 0 && j < m);
    }
    void dfs(int i, int j, int n, int m, vector<vector<char>>& g){
        vis[i][j] = 1;

        for (int k = 0; k < 4; k++){
            int to_x = i + dx[k];
            int to_y = j + dy[k];

            if (can (to_x, to_y, n, m) && !vis[to_x][to_y]){
                if(g[to_x][to_y] == '1'){
                    dfs(to_x, to_y, n, m, g);
                }
            }
        }

    }

public:
    int numIslands(vector<vector<char>>& g) {
        int n = g.size(), m = g[0].size();
        vis.assign(n, vector<int>(m, 0));
        for(int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(g[i][j] == '1' && !vis[i][j]){
                    dfs(i, j, n, m, g);
                    ans++;
                }
            }
        }
        return ans;
    }
};