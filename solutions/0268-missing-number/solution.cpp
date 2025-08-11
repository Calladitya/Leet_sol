class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //sort(nums.begin(),nums.end())
        // for (int i = nums.size() - 1; i >= 0; i--) { 
        //     int prev = nums[i] - 1; 
        //     if (find(nums.begin(), nums.end(), prev) == nums.end()) {
        //         return prev; 
        //     }
        // }
        // return nums.size(); 
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return nums.size();
    }
};

