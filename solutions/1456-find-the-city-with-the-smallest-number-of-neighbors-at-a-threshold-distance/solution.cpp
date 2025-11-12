class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        const int INF = 1e9;
        vector<vector<int>> matrix(n, vector<int>(n, INF));

        for (int i = 0; i < n; i++) matrix[i][i] = 0;

        for (auto &it : edges) {
            int u = it[0];
            int v = it[1];
            int w = it[2];
            matrix[u][v] = w;
            matrix[v][u] = w;
        }

        // Floyd-Warshall
        for (int k = 0; k < n; k++) {
            for (int u = 0; u < n; u++) {
                for (int v = 0; v < n; v++) {
                    if (matrix[u][k] < INF && matrix[k][v] < INF)
                        matrix[u][v] = min(matrix[u][v], matrix[u][k] + matrix[k][v]);
                }
            }
        }

        int mincount = INT_MAX;
        int city = -1;

        for (int u = 0; u < n; u++) {
            int count = 0;
            for (int v = 0; v < n; v++) {
                if (u != v && matrix[u][v] <= distanceThreshold)
                    count++;
            }
            if (count <= mincount) {
                mincount = count;
                city = u;
            }
        }

        return city;
    }
};

