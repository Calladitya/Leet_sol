class Solution {
public:
    //vector<int> searchRange(vector<int>& nums, int target) {
      /*  int lb=lowerBound(nums,target);
            if((lb==nums.size()) || (nums[lb]!=target)){
                return {-1,-1};
            }
        return {lb,upperBound(nums,target)-1};
    }
  int lowerBound(const vector<int>& nums, int target) {
       // int n=nums.size();
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
          //  return ans;
    }
     return ans;
    }
       int upperBound(const vector<int>& nums, int target) {
        //int n=nums.size();
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
           // return ans;
        }
         return ans;
         */
        vector<int> searchRange(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    int first = -1, last = -1;

    // Find the first occurrence of the target
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1; 
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    
    low = 0;
    high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1;  
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return {first, last};
        }
};

