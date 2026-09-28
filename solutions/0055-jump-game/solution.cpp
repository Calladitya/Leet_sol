class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi = 0;
        int ans;

        for(int i = 0; i < nums.size(); i++) {
            ans = nums[i] + i;
            if(i > maxi) {
                return false;
            }
            maxi = max(ans, maxi);

            if(maxi >= nums.size() - 1) {
                return true;
            }
        }

        return true;
    }
};
