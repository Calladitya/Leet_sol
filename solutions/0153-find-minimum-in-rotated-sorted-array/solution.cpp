class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int min=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[low]<=nums[mid]){
                    min = std::min(min, nums[low]);
                    low=mid+1;
                }
            else{
                   min = std::min(min, nums[mid]);
                    high=mid-1;
                }
            }
            return min;
    }
};

