class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      if(nums.size()==0){
        return 0;
      }
        map<int,int> mpp;
        int count=1;
        int maxi=INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
             mpp[nums[i]]++;
        }
       for(auto it:mpp){
        if(mpp.find(it.first + 1) != mpp.end()) {
           count++;
        }
        else{
            count=1;//yaha pe sequence tut raha h 
        }
        maxi=max(maxi,count);
       }
       return maxi;
    }
};
