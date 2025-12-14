class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum1=0;int sum2=0;
        int i=0;
        while(i<k){
            sum1+=nums[nums.size()-1-i];
            sum2+=nums[i];
            i++;
        }
        return abs(sum1-sum2);
    }
};
