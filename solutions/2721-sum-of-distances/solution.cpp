class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long> result(n, 0);
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        for (auto& p : mp) {
            vector<int>& indices = p.second;
            long long sum = 0;

            for (int idx : indices) {
                sum += idx;
            }

            long long leftSum = 0;

            for (int k = 0; k < indices.size(); k++) {
                long long idx = indices[k];
                long long leftCount = k;
                long long rightCount = indices.size() - k - 1;
                long long rightSum = sum - leftSum - idx;

                result[idx] =
                    idx * leftCount - leftSum +
                    rightSum - idx * rightCount;

                leftSum += idx;
            }
        }

        return result;
    }
};
