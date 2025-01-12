class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
         unordered_map<int, int> freq_map;  
        int l = 0, max_len = 0;
        for (int r = 0; r < nums.size(); r++) {
            freq_map[nums[r]]++;  
            while (freq_map[nums[r]] > k) {
                freq_map[nums[l]]--;  
                l++;  
            }
            max_len = max(max_len, r - l + 1);
        }

        return max_len;
    }
};
