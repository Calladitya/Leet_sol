class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        // If start or end is blocked → no path
        if (grid[0][0] == 1 || grid[n-1][n-1] == 1)
            return -1;

        queue<pair<int,int>> q;
        q.push({0, 0});

        vector<vector<int>> vis(n, vector<int>(n, 0));
        vis[0][0] = 1;

        int dist = 1; 

        int dir[8][2] = {
            {-1,-1}, {-1,0}, {-1,1},
            {0,-1},          {0,1},
            {1,-1}, {1,0}, {1,1}
        };

        while (!q.empty()) {

            int size = q.size();
            while (size--) {

                auto [r, c] = q.front();
                q.pop();
                if (r == n-1 && c == n-1) 
                    return dist;
                for (auto &d : dir) {
                    int nr = r + d[0];
                    int nc = c + d[1];

                    if (nr>=0 && nr<n && nc>=0 && nc<n &&
                        grid[nr][nc] == 0 && !vis[nr][nc]) 
                    {
                        vis[nr][nc] = 1;
                        q.push({nr, nc});
                    }
                }
            }

            dist++;  
        }

        return -1;
    }
};

