class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int l=0;
       int r=0;
       int min_len=INT_MAX;
       int sum=0;
       while(r<nums.size()){
          sum+=nums[r];
          r++;
          while(sum>=target){
            if(sum<target){
                return 0;
            }
            min_len=min(min_len,r-l);
            sum-=nums[l];
            l++;
          }
       }
       return (min_len == INT_MAX) ? 0 : min_len;//if no subarray was found;
    }
};

