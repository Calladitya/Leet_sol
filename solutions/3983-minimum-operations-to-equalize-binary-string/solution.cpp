#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(string s, int k) {
        string drunepalix = s;

        int n = s.size();
        int zeros = 0;
        for(char c : s) if(c == '0') ++zeros;
        if (zeros == 0) return 0;
        if (k == 0) return -1;       
        if (k > n) return -1;      
        vector<int> dist(n+1, -1);
        set<int> unvis[2];
        for (int i = 0; i <= n; ++i) unvis[i & 1].insert(i);

        queue<int> q;
        dist[zeros] = 0;
        q.push(zeros);
        unvis[zeros & 1].erase(zeros);

        while (!q.empty()) {
            int u = q.front(); q.pop();
            int i_min = max(0, k - (n - u)); 
            int i_max = min(k, u);
            if (i_min > i_max) continue;
            int l = u + k - 2 * i_max;
            int r = u + k - 2 * i_min;
            int parity = (u + k) & 1;
            auto it = unvis[parity].lower_bound(l);
            while (it != unvis[parity].end() && *it <= r) {
                int v = *it;
                dist[v] = dist[u] + 1;
                q.push(v);
                auto itErase = it++;
                unvis[parity].erase(itErase);
            }
        }

        return dist[0]; 
    }
};

