class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dist(m, vector<int>(n, 1e9));
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

        dist[0][0] = 0;
        pq.push({0, 0, 0});
        vector<int> dx = {0, 0, 1, -1}; 
        vector<int> dy = {1, -1, 0, 0};

        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();

            int cost = top[0], r = top[1], c = top[2];
            if (r == m - 1 && c == n - 1) return cost; 
            if (cost > dist[r][c]) continue;

            for (int k = 0; k < 4; k++) {
                int nr = r + dx[k];
                int nc = c + dy[k];
                if (nr < 0 || nc < 0 || nr >= m || nc >= n) continue;

                int newCost = cost + (grid[r][c] != k + 1);
                if (newCost < dist[nr][nc]) {
                    dist[nr][nc] = newCost;
                    pq.push({newCost, nr, nc});
                }
            }
        }
        return dist[m - 1][n - 1];
    }
};

