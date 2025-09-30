class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>>res;
        queue<vector<int>>q;

        q.push({0});
        while(!q.empty()){
            vector<int>path=q.front();
            q.pop();

            int last=path.back();
            if(last==n-1){
              res.push_back(path);
            }else{
                for(int next:graph[last]){
                    vector<int>nextpath(path);
                    nextpath.push_back(next);
                    q.push(nextpath);
                }
            }
        }
        return res;
    }
};
