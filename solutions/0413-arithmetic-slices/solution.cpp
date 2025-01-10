class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int countr=0,count=0;
        if(nums.size()<3) return 0;
        for(int i=2;i<nums.size();i++){
           if(nums[i] - nums[i-1] == nums[i-1] - nums[i-2]){
            countr+=1;
            count+=countr;
           }
           else{
            countr=0;
           }
        }
        return count;
    }
};
