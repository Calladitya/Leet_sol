class Solution {
private:
    int dp_function(vector<int>& cost, vector<int>& dp) {

        int n = cost.size();

        dp[n] = 0;
        dp[n + 1] = 0;

        for (int i = n - 1; i >= 0; i--) {

            dp[i] = cost[i] + min(dp[i + 1], dp[i + 2]);

        }

        return min(dp[0], dp[1]);
    }

public:
    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size();

        vector<int> dp(n + 2, 0);

        return dp_function(cost, dp);
    }
};
