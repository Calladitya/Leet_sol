class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        int sum=0;
      // int ansstart=-1;
       //int ansend=-1;
       // int start=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(sum==0){
                }
            if(sum>max){
                max=sum;
               // ansstart=start,ansend=i;
                }
            if (sum<0){
                sum=0;
            }
            }
        
        return max;
    }
};
