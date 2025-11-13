class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for (auto it : edges) {
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
        }

        vector<int> vis(n, 0);

        for (int i = 0; i < n; i++) {
            queue<int> q;
            if (!vis[i]) {
                q.push(i);
                vis[i] = 0;
            }

            while (!q.empty()) {
                int node = q.front();
                q.pop();

                for (auto it : adj[node]) {
                    if (!vis[it]) {
                        vis[it] = 1;
                        q.push(it);
                    }
                }
            }
        }

        int count = 0;
        int champion = -1;
        for (int i = 0; i < n; i++) {
            if (vis[i] == 0) {
                count++;
                champion = i;
            }
        }

        if (count == 1) return champion;
        return -1;
    }
};

