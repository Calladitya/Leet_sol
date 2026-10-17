class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans, ans2;
        set<int> st;
        map<int, int> freq;

        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
            st.insert(nums[i]);
        }

        while(!freq.empty()) {
            for(auto it : freq) {
                ans.push_back(it.first);
                freq[it.first]--;
            }

            for(auto it = freq.begin(); it != freq.end();) {
                if(it->second == 0) {
                    it = freq.erase(it);
                } else {
                    it++;
                }
            }
        }

        return ans;
    }
};
