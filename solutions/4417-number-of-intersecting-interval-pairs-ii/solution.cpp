class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();

        auto temoravlin = intervals;

        sort(intervals.begin(), intervals.end());

        long long count = 0;
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < n; i++) {
            while (!pq.empty() && pq.top() < intervals[i][0]) {
                pq.pop();
            }

            count += pq.size();
            pq.push(intervals[i][1]);
        }

        return count;
    }
};
