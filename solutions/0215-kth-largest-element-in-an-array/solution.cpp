class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        for(int i = 1; i <= k; i++) {
            if(i == k) {
                return nums[i - 1];  
            }
        }
        return 0;
    }
};

