class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j = 1;
        int ans = 0;

        while (j < prices.size()) {

            if (prices[j] > prices[i]) {
                int profit = prices[j] - prices[i];
                ans += profit;
            }

            i = j;
            j++;
        }

        return ans;
    }
};
