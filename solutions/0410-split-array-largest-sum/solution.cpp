class Solution {
public:
    int findsum(vector<int>& nums, int sumarray) {
        int painter = 1;
        long long sumcount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (sumcount + nums[i] <= sumarray) {
                sumcount += nums[i];
            } else {
                painter++;
                sumcount = nums[i];
            }
        }
        
        return painter;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;
            int countsum = findsum(nums, mid);
            
            if (countsum > k) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        
        return low;
    }
};


