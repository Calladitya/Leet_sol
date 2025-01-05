
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        unordered_map<int, int> freq1, freq2;
        int left1 = 0, left2 = 0;
        int count = 0;

        for (int right = 0; right < nums.size(); ++right) {
            freq1[nums[right]]++;
            freq2[nums[right]]++;
            while (freq1.size() > k) {
                freq1[nums[left1]]--;
                if (freq1[nums[left1]] == 0) {
                    freq1.erase(nums[left1]);
                }
                left1++;
            }
            while (freq2.size() > k - 1) {
                freq2[nums[left2]]--;
                if (freq2[nums[left2]] == 0) {
                    freq2.erase(nums[left2]);
                }
                left2++;
            }
            count += (left2 - left1);
        }

        return count;
    }
};
