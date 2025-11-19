class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int z = nums[0];                           
        int y = nums[nums.size()-2];              
        int x = nums[nums.size()-1];            
        
        return x + y - z;
    }
};

