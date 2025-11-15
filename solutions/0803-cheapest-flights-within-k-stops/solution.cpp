class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

        vector<vector<pair<int,int>>> adj(n);
        for (auto &f : flights) {
            adj[f[0]].push_back({f[1], f[2]});
        }

        vector<int> dist(n, 1e9);
        dist[src] = 0;

        // {cost, node, stops}
        queue<vector<int>> q;
        q.push({0, src, 0});

        while (!q.empty()) {
            auto curr = q.front();
            q.pop();

            int cost  = curr[0];
            int node  = curr[1];
            int stops = curr[2];

            if (stops > k) continue;

            for (auto &p : adj[node]) {
                int next = p.first;
                int w = p.second;

                if (cost + w < dist[next] && stops <= k) {
                    dist[next] = cost + w;
                    q.push({dist[next], next, stops + 1});
                }
            }
        }
        
        return dist[dst] == 1e9 ? -1 : dist[dst];
    }
};

