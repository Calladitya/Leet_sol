class Disjointset {
public:
    vector<int> rank, parent;

    Disjointset(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUpar(int node) {
        if (node == parent[node]) return node;
        return parent[node] = findUpar(parent[node]);
    }

    void UnionByRank(int u, int v) {
        int ulp_u = findUpar(u);
        int ulp_v = findUpar(v);

        if (ulp_u == ulp_v) return;

        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {

        int n = points.size();
        Disjointset ds(n);

        vector<vector<int>> edges;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int w = abs(points[i][0] - points[j][0]) +
                        abs(points[i][1] - points[j][1]);
                edges.push_back({w, i, j});
            }
        }

        sort(edges.begin(), edges.end());

        int cost = 0;

        for (auto &e : edges) {
            int w = e[0];
            int u = e[1];
            int v = e[2];

            if (ds.findUpar(u) != ds.findUpar(v)) {
                cost += w;
                ds.UnionByRank(u, v);
            }
        }

        return cost;
    }
};

