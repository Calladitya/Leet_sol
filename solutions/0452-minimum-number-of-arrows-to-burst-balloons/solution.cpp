class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] < b[1];
             });//sorting with the refrence of second element;

        int count = 0;
        long long arrow = LLONG_MIN;

        for (int i = 0; i < points.size(); i++) {
            if (count == 0 || points[i][0] > arrow) {
                count++;
                arrow = points[i][1];
            }
        }

        return count;
    }
};
