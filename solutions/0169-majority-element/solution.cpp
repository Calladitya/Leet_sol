class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        for(const auto&pair:mpp){
            if(pair.second>nums.size()/2){
                return(pair.first);
            }
        }
        return 0;
    }
};
