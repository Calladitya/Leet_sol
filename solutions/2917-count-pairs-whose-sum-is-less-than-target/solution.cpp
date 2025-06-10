class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end()); // Step 1: Sort the array
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n - 1; ++i) {
        int lo = i + 1, hi = n - 1, pos = i;

        // Binary search to find the largest index j such that nums[i] + nums[j] < target
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[i] + nums[mid] < target) {
                pos = mid;  // found a valid j
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        count += (pos - i); // count of valid j's for current i
    }

    return count;
    }
};
