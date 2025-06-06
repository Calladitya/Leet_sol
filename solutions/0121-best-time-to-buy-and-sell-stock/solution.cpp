class Solution {
public:
    int helper(vector<int>& prices, int i, int minPrice, int maxProfit) {
        if (i == prices.size()) {
            return maxProfit;
        }

        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);

        return helper(prices, i + 1, minPrice, maxProfit);
    }

    int maxProfit(vector<int>& prices) {
        return helper(prices, 0, INT_MAX, 0);
    }
};

