class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int,int>> q;
        for(int i=0; i<m; i++){
            if(board[0][i] == 'O' && !vis[0][i]){
                q.push({0,i});
                vis[0][i] = 1;
            }
            if(board[n-1][i] == 'O' && !vis[n-1][i]){
                q.push({n-1,i});
                vis[n-1][i] = 1;
            }
        }
        for(int j=0; j<n; j++){
            if(board[j][0] == 'O' && !vis[j][0]){
                q.push({j,0});
                vis[j][0] = 1;
            }
            if(board[j][m-1] == 'O' && !vis[j][m-1]){
                q.push({j,m-1});
                vis[j][m-1] = 1;
            }
        }

        int delrow[4] = {-1,0,1,0};
        int delcol[4] = {0,1,0,-1};
        while(!q.empty()){
            auto [r,c] = q.front();
            q.pop();
            board[r][c] = 'T'; 

            for(int k=0; k<4; k++){
                int nrow = r + delrow[k];
                int ncol = c + delcol[k];
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m 
                   && board[nrow][ncol] == 'O' && !vis[nrow][ncol]){
                    q.push({nrow,ncol});
                    vis[nrow][ncol] = 1;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(board[i][j] == 'O') board[i][j] = 'X'; 
                if(board[i][j] == 'T') board[i][j] = 'O'; 
            }
        }
    }
};

