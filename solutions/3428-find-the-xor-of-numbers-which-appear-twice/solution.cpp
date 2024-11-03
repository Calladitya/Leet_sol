class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans=0;
        map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        for(const auto&pair:mpp){
            if(pair.second==2){
                ans=ans^pair.first;
            }
        }
    
    
        return ans;
    }
};
