class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=INT_MIN;
        int product=1;
        //int ansstart=-1;
        //int ansend=-1;
       // int start=0;
        for(int i=0;i<nums.size();i++){
            product=product*nums[i];
          if (product>max){
              max=product;
              //ansstart=start,ansend=i;
              }
        if(product==0){
           product=1;
           }
            }
        product=1;
       for(int i=nums.size()-1;i>=0;i--){
          product=product*nums[i];
            if(product>max){
                max=product;
                }
                if(product==0){
                    product=1;
                        }
                }
        return max;
    }
};
