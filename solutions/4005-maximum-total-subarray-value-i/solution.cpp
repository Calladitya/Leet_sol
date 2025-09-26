class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxVal = INT_MIN;
        int minVal = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            maxVal = std::max(maxVal, nums[i]);
            minVal = std::min(minVal, nums[i]);
        }

        long long result = (long long)(maxVal - minVal) * k;
        return result;
    }
};
