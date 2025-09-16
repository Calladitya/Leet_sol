class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        // create transpose matrix of size col x row
        vector<vector<int>> transpose(col, vector<int>(row));

        // fill transpose
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                transpose[j][i] = matrix[i][j];
            }
        }
        for(int i = 0; i < col; i++){     
            for(int j = 0; j < row; j++){ 
                cout << transpose[i][j] << " ";
            }
            cout << endl;
        }

        return transpose;
    }
};


