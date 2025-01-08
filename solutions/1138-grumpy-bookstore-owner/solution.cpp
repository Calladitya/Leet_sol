class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
        int totalSatisfied = 0;
        int maxAdditionalSatisfied = 0;
        int currentAdditionalSatisfied = 0;
        for (int i = 0; i < customers.size(); i++) {
            if (grumpy[i] == 0) {
                totalSatisfied += customers[i];  
            } else {
                currentAdditionalSatisfied += customers[i]; 
            }
        }
        for (int i = 0; i < X; i++) {
            if (grumpy[i] == 1) {
                maxAdditionalSatisfied += customers[i];
            }
        }
        
        currentAdditionalSatisfied = maxAdditionalSatisfied;
        for (int i = X; i < customers.size(); i++) {
            if (grumpy[i] == 1) {
                currentAdditionalSatisfied += customers[i];
            }
            if (grumpy[i - X] == 1) {
                currentAdditionalSatisfied -= customers[i - X];
            }
            maxAdditionalSatisfied = max(maxAdditionalSatisfied, currentAdditionalSatisfied);
        }
        return totalSatisfied + maxAdditionalSatisfied;
    }
};

