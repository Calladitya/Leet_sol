class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<int,int>mpp;
      int maxi=INT_MIN;
      for(auto it:nums){
        mpp[it]++;
      }
      int ans;
      for(auto it:mpp){
       if( it.second > maxi){
        maxi=it.second;
        ans=it.first;
       }
      }
      return ans;
    }
};
