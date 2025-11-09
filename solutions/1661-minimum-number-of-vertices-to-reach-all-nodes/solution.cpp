class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>vis(n,0);
        for(auto it:edges){
            int v=it[1];
            vis[v]=1;
        }
        vector<int>ans;
        for(int i=0;i<vis.size();i++){
            if(vis[i]!=1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
