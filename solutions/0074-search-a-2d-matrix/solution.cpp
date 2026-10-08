class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int mid = 0;
        int n = matrix.size();
        int m = matrix[0].size();

        int l = 0;
        int h = n * m - 1;

        int row;
        int col;

        while(l <= h) {

            mid = (l + h) / 2;

            row = mid / m;
            col = mid % m;

            if(matrix[row][col] == target) {
                return true;
            }
            else if(matrix[row][col] > target) {
                h = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return false;
    }
};
