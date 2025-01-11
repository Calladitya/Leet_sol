class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
     /*   long long count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int max_val = INT_MIN, min_val = INT_MAX; 
            for (int j = i; j < n; j++) {
                max_val = max(max_val, nums[j]);
                min_val = min(min_val, nums[j]);
                if (max_val == maxK && min_val == minK) {
                    count++;
                }
                if (max_val > maxK || min_val < minK) {
                    break;
                }
            }
        }
        
        return count;*/
        long long count = 0;
        int lastMinK = -1, lastMaxK = -1, lastInvalid = -1;

        for (int r = 0; r < nums.size(); r++) {
            // If the current element is invalid (out of range), reset the window
            if (nums[r] < minK || nums[r] > maxK) {
                lastInvalid = r;
            }

            // Update the last positions of minK and maxK
            if (nums[r] == minK) lastMinK = r;
            if (nums[r] == maxK) lastMaxK = r;

            // Calculate the number of valid subarrays ending at 'r'
            count += max(0, min(lastMinK, lastMaxK) - lastInvalid);
        }

        return count;
    }
};

