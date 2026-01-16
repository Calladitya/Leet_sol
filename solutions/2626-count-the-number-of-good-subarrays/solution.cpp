class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int, long long> freq;
        long long pairCount = 0;
        long long ans = 0;
        int left = 0;
        int n = nums.size();

        for (int right = 0; right < n; right++) {
            pairCount += freq[nums[right]];
            freq[nums[right]]++;
            while (pairCount >= k) {
                ans += (n - right);
                freq[nums[left]]--;
                pairCount -= freq[nums[left]];
                left++;
            }
        }
        return ans;
    }
};

