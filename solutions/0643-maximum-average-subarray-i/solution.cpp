class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       /* int sum = 0, l = 0, r = 0, countr = 0;
        double max_avg = -1e9; // Initialize to a very small value

        while (r < nums.size()) {
            sum += nums[r];
            countr++;

            if (countr == k) { // When the window size reaches k
                double avg = (double)sum / k; // Calculate the average
                max_avg = max(max_avg, avg);  // Update max_avg if the current avg is higher
            }

            if (countr > k) { // Shrink the window if it exceeds size k
                sum -= nums[l];
                l++;
                countr--;
            }

            r++;
        }

        return max_avg; // Return the maximum average found*/
        int sum = 0;
        double max_avg = INT_MIN;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        max_avg = (double)sum / k;
        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k];
            max_avg = max(max_avg, (double)sum / k);
        }

        return max_avg;
    }
};

