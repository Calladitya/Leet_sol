class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int maxi = INT_MIN;
        int count=0;
        while(i<nums.size()){
            if(nums[i]==1){
                count++;
            }else {
                maxi = max(maxi,count);
                count=0;
            }
            i++;
        }
        maxi=max(maxi,count);
        return maxi;
    }
};
