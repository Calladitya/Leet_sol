class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb,
                          int start_node, int end_node) {

        vector<vector<pair<double,int>>> adj(n);

        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            double p = succProb[i];

            adj[u].push_back({p, v}); 
            adj[v].push_back({p, u});
        }

        vector<double> prob(n, 0.0);
        prob[start_node] = 1.0;

        priority_queue<pair<double,int>> pq; 
        pq.push({1.0, start_node});

        while (!pq.empty()) {

            double currProb = pq.top().first;  
            int node = pq.top().second;         
            pq.pop();

            if (node == end_node) return currProb;

            for (auto &it : adj[node]) {
                double edgeProb = it.first;    
                int nextNode = it.second;

                double newProb = currProb * edgeProb;

                if (newProb > prob[nextNode]) {
                    prob[nextNode] = newProb;
                    pq.push({newProb, nextNode});
                }
            }
        }

        return 0.0;
    }
};

