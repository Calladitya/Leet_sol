class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
        }
        auto it=remove(nums.begin(),nums.end(),0);
        nums.erase(it,nums.end());
        while(count!=0){
            nums.push_back(0);
            count--;
        }
        return ;
    }
};
