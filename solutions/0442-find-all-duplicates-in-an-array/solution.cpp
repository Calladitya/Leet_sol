class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>mpp;

        vector<int>result;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] > 1){
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};
