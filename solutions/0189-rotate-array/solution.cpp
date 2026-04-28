class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i=0; int j=nums.size();
         k=k%j;

        reverse(nums.begin(),nums.end());
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.begin()+k);
    }
};
