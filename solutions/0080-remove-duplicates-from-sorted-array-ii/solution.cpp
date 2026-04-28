class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int i=0;
        // int j=1;
        // int count=1;
        // while(j<nums.size()){
        //    if(nums[i]==nums[j]){
        //     count++;
        //     if(count>2){
        //         nums.erase(nums.begin()+j);
        //         continue;
        //     }
        //    }
        //     else{
        //     i=j;
        //     count=1;
        // }
        //     j++;
        // }
        // return nums.size();

        int k=0;

        for(int i=0;i<nums.size();i++){
            if(k < 2 || nums[i]!=nums[k-2]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};
