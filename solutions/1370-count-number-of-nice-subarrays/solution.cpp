class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int counteven=0;
        int sum=0;
        int count=0;
        while(r<nums.size()){
            if(nums[r]%2!=0){
                sum++;
                counteven=0;
            }
            while(sum==k){
                counteven++;
                if(nums[l]%2!=0){
                    sum--;
                }
                l++;
            }
            count+=counteven;
            r++;
        }
    return count;
    }
};
