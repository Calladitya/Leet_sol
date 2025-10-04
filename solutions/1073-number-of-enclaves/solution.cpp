class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        queue<pair<int,int>> q;
        for(int i=0; i<m; i++){
            if(grid[0][i] == 1 && !vis[0][i]){
                q.push({0,i});
                vis[0][i] = true;
            }
            if(grid[n-1][i] == 1 && !vis[n-1][i]){
                q.push({n-1,i});
                vis[n-1][i] = true;
            }
        }
        for(int j=0; j<n; j++){
            if(grid[j][0] == 1 && !vis[j][0]){
                q.push({j,0});
                vis[j][0] = true;
            }
            if(grid[j][m-1] == 1 && !vis[j][m-1]){
                q.push({j,m-1});
                vis[j][m-1] = true;
            }
        }

        int delrow[4] = {-1,0,1,0};
        int delcol[4] = {0,1,0,-1};
        while(!q.empty()){
            auto [r,c] = q.front();
            q.pop();

            for(int i=0; i<4; i++){
                int nrow = r + delrow[i];
                int ncol = c + delcol[i];
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m 
                   && grid[nrow][ncol] == 1 && !vis[nrow][ncol]){
                    q.push({nrow,ncol});
                    vis[nrow][ncol] = true;
                }
            }
        }
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1 && !vis[i][j]){
                    count++;
                }
            }
        }

        return count;
    }
};

