class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count = 0;
        int left = 0;
        int odd = 0;
        int prefix = 0;

        for (int right = 0; right < nums.size(); right++) {

            if (nums[right] % 2 != 0) {
                odd++;
                prefix = 0;
            }

            while (odd == k) {
                prefix++;
                if (nums[left] % 2 != 0)
                    odd--;
                left++;
            }

            count += prefix;
        }
        return count;
    }
};

