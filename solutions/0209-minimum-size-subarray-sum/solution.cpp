// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
    //     int mini=INT_MAX;
    //     int sum;
    //     for(int i=0;i<nums.size();i++){
    //         sum=0;
    //         for(int j=i;j<nums.size();j++){
    //            sum+=nums[j];
    //            if(sum >= target){
    //             mini=min(mini,j-i+1);
    //            }
    //         }
    //     }
    //     if(mini== INT_MAX){
    //         return 0;
    //     }
    //     return mini;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int r = 0;
        int l = 0;
        int mini = INT_MAX;
        int sum = 0;

        while(r != nums.size()) {

            sum += nums[r];

            while(sum >= target) {
                mini = min(mini, r - l + 1);

                sum -= nums[l];
                l++;
            }
            r++;
        }
        if(mini == INT_MAX) {
            return 0;
        }

        return mini;
    }
};
