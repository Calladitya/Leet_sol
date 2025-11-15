class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int n=edges.size();
         vector<int>indegree(n,0);
         
         for(int i=0;i<n;i++){
            if(edges[i]!=-1){
                indegree[edges[i]]++;
            }
         }
         queue<int>q;
         for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
         }
         vector<bool>removed(n,false);
         while(!q.empty()){
            int node=q.front();
            q.pop();
             removed[node]=true;

             int v=edges[node];
             if(v!=-1){
                indegree[v]--;
                if(indegree[v]==0){
                    q.push(v);
                }
             }
         }
         vector<bool>vis(n,false);
         int ans=-1;

         for(int i=0;i<n;i++){
            if(!removed[i] && !vis[i]){
                 int curr=i;
                 int cnt=0;

                 while(!vis[curr]){
                    vis[curr]=true;
                    cnt++;
                    curr=edges[curr];
                 }
                 ans=max(ans,cnt);
            }
         }
        return ans;
    }
};
