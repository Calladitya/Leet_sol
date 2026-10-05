class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int bestGap = INT_MAX;
        int bestSum = 0;

        for(int i = 0; i < nums.size() - 2; i++) {

            int j = i + 1;
            int k = nums.size() - 1;

            while(j < k) {

                int sum = nums[i] + nums[j] + nums[k];

                int gap = abs(sum - target);

                if(gap < bestGap) {
                    bestGap = gap;
                    bestSum = sum;
                }

                if(sum < target) {
                    j++;
                }
                else if(sum > target) {
                    k--;
                }
                else {
                    return sum;
                }
            }
        }

        return bestSum;
    }
};
