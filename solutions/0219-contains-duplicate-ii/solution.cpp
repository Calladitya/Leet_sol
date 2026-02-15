class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int r=0;r<nums.size();r++){
            int l=r+1;
            while(l<nums.size()  && abs(r-l)<=k){
                if(nums[r]==nums[l]){
                    return true;
                }
                l++;
            }
        }
        return false;
    }
};
