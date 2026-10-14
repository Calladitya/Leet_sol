
class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int maxi = INT_MIN;
        int r1 = -1, r2 = -1;

        for (int j = 0; j < nums.size(); j++) {
            for (int i = 0; i < nums.size(); i++) {

                if (i != j &&
                    nums[i] + nums[j] == target &&
                    nums[i] > nums[j]) {

                    int product = nums[i] * nums[j];

                    if (product > maxi) {
                        maxi = product;
                        r1 = i;
                        r2 = j;
                    }
                }
            }
        }

        return {r1, r2};
    }
};

