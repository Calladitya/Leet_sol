class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
            for (const auto& pair : mpp) {
            if (pair.second == 1) {
                return pair.first;
            }
            }
        return 0;
        }
    };
