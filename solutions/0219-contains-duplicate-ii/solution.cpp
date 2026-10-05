class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int, vector<int>> mpp;

        for(int i = 0; i < nums.size(); i++) {
            mpp[nums[i]].push_back(i);
        }

        for(auto& p : mpp) {

            vector<int> result = p.second;

            for(int i = 1; i < result.size(); i++) {

                if(abs(result[i] - result[i - 1]) <= k) {
                    return true;
                }
            }
        }

        return false;
    }
};
