class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int ans=0;

        for(int i=0;i<n-1;i++){
            long long sum=0;
            int count=0;

            for(int j=i+1;j<nums.size();j++){
                sum+=nums[j];
                count++;
            }
            if(nums[i]>sum/count){
                ans++;
            }
        }
        return ans;
    }
};
