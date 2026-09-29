// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
    //     vector<int>product;
    //    for(int i=0;i<nums.size();i++){
    //      int ans=1;
    //     for(int j=0;j<nums.size();j++){
    //         if(i != j){
    //             ans=ans*nums[j];
    //         }
    //     }
    //     product.push_back(ans);
    //    }
    //    return product;w
        
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//      int i=0;
//      vector<int>product;
//      while(i!=nums.size()){
//      int end=1;int start=1;
//      for(int j=0;j<i;j++){
//         start*=nums[j];
//      }
//      for(int k=i+1;k<nums.size();k++){
//         end*=nums[k];
//      }
//      product.push_back(start*end);
//      i++;
//      }
//      return product;
//     }
// };

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left, right, product;

        int ans = 1;

        left.push_back(1);

        for(int i = 1; i < nums.size(); i++) {
            ans = ans * nums[i - 1];
            left.push_back(ans);
        }

        int ans2 = 1;

        right.push_back(1);

        for(int i = nums.size() - 2; i >= 0; i--) {
            ans2 = ans2 * nums[i + 1];
            right.push_back(ans2);
        }


        reverse(right.begin(), right.end());

        for(int i = 0; i < nums.size(); i++) {
            product.push_back(left[i] * right[i]);
        }

        return product;
    }
};
