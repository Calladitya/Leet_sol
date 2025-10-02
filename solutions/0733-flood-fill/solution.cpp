class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int startColor = image[sr][sc];
        if(startColor == color) return image;
        vector<vector<int>> vis = image;
        queue<pair<int,int>> q;

        q.push({sr, sc});
        vis[sr][sc] = color;

        int drow[4] = {-1, 0, 1, 0};
        int dcol[4] = {0, 1, 0, -1};

        while(!q.empty()){
            int a = q.front().first;
            int b = q.front().second;
            q.pop();

            for(int i=0;i<4;i++){
                int nrow = a + drow[i];
                int ncol = b + dcol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                   vis[nrow][ncol] != color && image[nrow][ncol] == startColor){
                    vis[nrow][ncol] = color;
                    q.push({nrow, ncol});
                }
            }
        }

        return vis;
    }
};

