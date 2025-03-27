class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int counti=0,countj=0;
        for(int i=0;i<nums.size();i++){
           counti+=nums[i];
        }
         for(int j=0;j<nums.size();j++){
            if(countj==counti-countj-nums[j]){
                return j;
            }
            countj+=nums[j];
         }
        return -1;
    }
};
