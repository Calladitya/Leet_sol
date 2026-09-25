class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int profit_max = 0;

        // for(int i = 0; i < prices.size(); i++) {
        //     for(int j = i + 1; j < prices.size(); j++) {

        //         if(prices[j] > prices[i]) {
        //             int profit = prices[j] - prices[i];
        //             profit_max = max(profit_max, profit);
        //         }
        //     }
        // }

        // return profit_max;

        int i = 0;  
        int j = 1; 
        int profit_max = 0;

        while (j < prices.size()) {

            if (prices[j] > prices[i]) {
                int profit = prices[j] - prices[i];
                profit_max = max(profit_max, profit);
            } 
            else {
                i = j;
            }

            j++;
        }

        return profit_max;
    }
};
