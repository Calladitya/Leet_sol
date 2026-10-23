
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentMax = nums[0];
        int maxi = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentMax = max(nums[i], nums[i] + currentMax);
            maxi = max(currentMax, maxi);
        }

        return maxi;
    }
};

