class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
      std::set<int>all;
      int r=0,l=0,sum=0;
      int max_sum=0;
      while(r<nums.size()){
       while(all.count(nums[r])){
        sum-=nums[l];
        all.erase(nums[l]);
        l++;
       }
       all.insert(nums[r]);
       sum+=nums[r];
       max_sum=max(max_sum,sum);
       r++;
      }
      return max_sum;
    }
};
