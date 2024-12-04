class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       sort(nums.begin(), nums.end()); 
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {  
                return nums[i];  
            }
        }
        
        return -1;
     /*  class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while (low < high) {
            int mid = low + (high - low) / 2;
            int count = 0;
            for (int num : nums) {
                if (num <= mid) {
                    count++;
                }
            }

            if (count > mid) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;*/
    }
};

