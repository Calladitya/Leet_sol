class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int,int>> q;

        int delr[4] = {-1, 0, 1, 0};
        int delc[4] = {0, 1, 0, -1};

        int Maxcount = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){

                if(grid[i][j] == 1 && !vis[i][j]){

                    int count = 0;
                    vis[i][j] = 1;
                    q.push({i, j});
                    count++;

                    while(!q.empty()){
                        auto [r, c] = q.front();
                        q.pop();

                        for(int k = 0; k < 4; k++){
                            int nrow = r + delr[k];
                            int ncol = c + delc[k];

                            if(nrow < 0 || nrow >= n || ncol < 0 || ncol >= m)
                                continue;

                            if(grid[nrow][ncol] == 1 && !vis[nrow][ncol]){
                                vis[nrow][ncol] = 1;
                                count++;
                                q.push({nrow, ncol});
                            }
                        }
                    }

                    Maxcount = max(Maxcount, count);
                }

            }
        }

        return Maxcount;
    }
};

