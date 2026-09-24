class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       map<int,int>mpp;
       for(auto it:nums){
        mpp[it]++;
        if(mpp[it] >  2){
            mpp[it]=2;
        }
       }
       int i=0;
      for(auto it:mpp){
         int count=0;
        while(count < it.second){
        nums[i]=it.first;
        i++;
        count++;
      }
      }
          nums.resize(i);
       return i;
    }
};
