#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to perform topological sort using Kahn's algorithm
    vector<int> topologicalSort(int k, vector<vector<int>>& conditions) {
        vector<vector<int>> adj(k + 1);
        vector<int> indegree(k + 1, 0);

        // Build adjacency list and indegree array
        for (auto &it : conditions) {
            adj[it[0]].push_back(it[1]);
            indegree[it[1]]++;
        }

        queue<int> q;
        for (int i = 1; i <= k; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> topo;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);

            for (auto &it : adj[node]) {
                indegree[it]--;
                if (indegree[it] == 0) {
                    q.push(it);
                }
            }
        }

        // If cycle exists
        if (topo.size() != k) {
            return {};
        }

        return topo;
    }

    // Function to build the matrix
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<int> rowOrder = topologicalSort(k, rowConditions);
        vector<int> colOrder = topologicalSort(k, colConditions);

        // If topological sort failed (cycle)
        if (rowOrder.empty() || colOrder.empty()) {
            return {};
        }

        vector<int> rowPos(k + 1), colPos(k + 1);
        for (int i = 0; i < k; i++) {
            rowPos[rowOrder[i]] = i;
            colPos[colOrder[i]] = i;
        }

        vector<vector<int>> matrix(k, vector<int>(k, 0));
        for (int num = 1; num <= k; num++) {
            int r = rowPos[num];
            int c = colPos[num];
            matrix[r][c] = num;
        }

        return matrix;
    }
};

