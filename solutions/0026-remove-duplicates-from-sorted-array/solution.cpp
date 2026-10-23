class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;int j=i+1;
        while(j < nums.size()){
            if(nums[i]==nums[j]){
                nums.erase(nums.begin() +j);
            }
            else if(nums[i] != nums[j]){
                i=j;
                j++;
            }
        }
        return nums.size();
    }
};
