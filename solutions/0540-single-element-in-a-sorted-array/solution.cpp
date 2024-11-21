class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            if(nums.size()==1){
                return nums[0];
            }
            if(nums[low]==nums[low+1]){
                low+=2;
            }
            else{
                return nums[low];
            }
        }
        return 0;
    }
};
