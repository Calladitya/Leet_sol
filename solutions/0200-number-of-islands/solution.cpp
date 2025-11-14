class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        int count=0;

         int delr[4] = {-1, 0, 1, 0};
         int delc[4] = {0, 1, 0, -1};

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    count++;

                    vis[i][j]=1;
                    q.push({i,j});

                     while(!q.empty()){
                        auto [r,c]=q.front();
                        q.pop();

                        for(int k=0;k<4;k++){
                          int nrow=r+delr[k];
                          int ncol=c+delc[k];

                         if(nrow < 0 || nrow >= n || ncol < 0 || ncol >= m) continue;


                          if(grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                            vis[nrow][ncol]=1;
                            q.push({nrow,ncol});
                          }
                        }
                     }
                }
            }
        }
        return count;
    }
};
