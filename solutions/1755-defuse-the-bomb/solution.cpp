class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> arr2(n, 0);  // Result vector initialized to 0
        
        if (k == 0) {
            return arr2;  // If k == 0, all values in arr2 will remain 0
        }

        for (int r = 0; r < n; r++) {
            int sum = 0;  // To store the sum of elements

            if (k > 0) {
                // Sum the next k elements circularly
                for (int i = 1; i <= k; i++) {
                    sum += code[(r + i) % n];
                }
            } else if (k < 0) {
                // Sum the previous k elements circularly
                for (int i = 1; i <= abs(k); i++) {
                    sum += code[(r - i + n) % n];
                }
            }
            
            arr2[r] = sum;  // Store the result in the arr2
        }

        return arr2;  // Return the final result
    }
};

