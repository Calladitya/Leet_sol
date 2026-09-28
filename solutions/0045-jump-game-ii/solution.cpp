class Solution {
public:
    int jump(vector<int>& nums) {
       int mini=INT_MAX;
       int count=0;
       int i=0;
       int end=0;
       int maxi=INT_MIN;
       while(i<nums.size()-1){
        maxi= max(maxi,nums[i]+i);
        if(i==end){
          count++;
          end=maxi;
        }
        i++;
       }
       mini=count;
       return mini;
    }
};
