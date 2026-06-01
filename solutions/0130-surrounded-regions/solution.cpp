// class Solution {
// public:
//     void solve(vector<vector<char>>& board) {
//         int n = board.size();
//         int m = board[0].size();
//         vector<vector<int>> vis(n, vector<int>(m, 0));
//         queue<pair<int,int>> q;
//         for(int i=0; i<m; i++){
//             if(board[0][i] == 'O' && !vis[0][i]){
//                 q.push({0,i});
//                 vis[0][i] = 1;
//             }
//             if(board[n-1][i] == 'O' && !vis[n-1][i]){
//                 q.push({n-1,i});
//                 vis[n-1][i] = 1;
//             }
//         }
//         for(int j=0; j<n; j++){
//             if(board[j][0] == 'O' && !vis[j][0]){
//                 q.push({j,0});
//                 vis[j][0] = 1;
//             }
//             if(board[j][m-1] == 'O' && !vis[j][m-1]){
//                 q.push({j,m-1});
//                 vis[j][m-1] = 1;
//             }
//         }

//         int delrow[4] = {-1,0,1,0};
//         int delcol[4] = {0,1,0,-1};
//         while(!q.empty()){
//             auto [r,c] = q.front();
//             q.pop();
//             board[r][c] = 'T'; 

//             for(int k=0; k<4; k++){
//                 int nrow = r + delrow[k];
//                 int ncol = c + delcol[k];
//                 if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m 
//                    && board[nrow][ncol] == 'O' && !vis[nrow][ncol]){
//                     q.push({nrow,ncol});
//                     vis[nrow][ncol] = 1;
//                 }
//             }
//         }
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(board[i][j] == 'O') board[i][j] = 'X'; 
//                 if(board[i][j] == 'T') board[i][j] = 'O'; 
//             }
//         }
//     }
// };

class Solution {
private:

    void bfs(int row, int col, vector<vector<char>>& board)
    {
        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        vector<pair<int,int>> region;

        queue<pair<int,int>> q;
        q.push({row, col});
        vis[row][col] = 1;

        bool touchesBoundary = false;

        int delr[] = {-1, 0, 1, 0};
        int delc[] = {0, 1, 0, -1};

        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            region.push_back({row, col});

            if(row == 0 || col == 0 ||
               row == n - 1 || col == m - 1)
            {
                touchesBoundary = true;
            }

            for(int i = 0; i < 4; i++)
            {
                int nrow = row + delr[i];
                int ncol = col + delc[i];

                if(nrow >= 0 &&
                   nrow < n &&
                   ncol >= 0 &&
                   ncol < m &&
                   !vis[nrow][ncol] &&
                   board[nrow][ncol] == 'O')
                {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }

        if(!touchesBoundary)
        {
            for(auto it : region)
            {
                board[it.first][it.second] = 'X';
            }
        }
    }

public:
    void solve(vector<vector<char>>& board)
    {
        int n = board.size();
        int m = board[0].size();

        for(int row = 0; row < n; row++)
        {
            for(int col = 0; col < m; col++)
            {
                if(board[row][col] == 'O')
                {
                    bfs(row, col, board);
                }
            }
        }
    }
};
