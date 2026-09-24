class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     map<int,int>mpp;
     for(auto it:nums){
       mpp[it]++;
       if(mpp[it]>1){
        mpp[it]=1;
       }
     } 
     int i=0;
     for(auto it:mpp){
        nums[i]=it.first;
        i++;
     }       
     return i;                                                
    }
};
