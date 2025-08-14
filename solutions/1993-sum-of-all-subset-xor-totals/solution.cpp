class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
       int sum=0;
       for(int mask=0;mask<(1<<n);mask++){
        int ans=0;
        for(int i=0;i<n;i++){
            if(mask&(1<<i)){
                ans^=nums[i];
            }
        }
        sum+=ans;
       }
       return sum;
    }
};
