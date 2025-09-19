class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int> st(nums.begin(), nums.end());
        vector<int> uniqueNums(st.begin(), st.end());
        vector<int> ans;
        for (int i = uniqueNums.size() - 1; i >= 0 && ans.size() < k; i--) {
            ans.push_back(uniqueNums[i]);
        }

        return ans;
    }
};
