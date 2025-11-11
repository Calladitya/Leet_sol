#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<vector<int>> adj(n);
        for (int i = 0; i < n; i++) {
            for (auto key : rooms[i]) {
                adj[i].push_back(key);
            }
        }

        vector<int> vis(n, 0);
        queue<int> q;

        vis[0] = 1;   
        q.push(0);

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (auto it : adj[node]) {
                if (vis[it] == 0) {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (vis[i] == 0) {
                return false;
            }
        }

        return true;
    }
};

