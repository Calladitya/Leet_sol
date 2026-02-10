class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
//         // vector<int>result;
//         // int product;
//         // for(int i=0;i<nums.size();i++){
//         //      product=1;
//         //      for(int j=0;j<nums.size();j++){
//         //            if(j!=i){
//         //             product*=nums[j];
//         //            }
//         //      }
//         //      result.push_back(product);
//         // }
//         // return result;
//          int n = nums.size();
//         vector<int> result(n, 1);

//         int product1 = 1; // left product
//         for (int i = 0; i < n; i++) {
//             result[i] = product1;   // store prefix till i-1
//             product1 *= nums[i];    // update prefix
//         }

//         int product2 = 1; // right product
//         for (int i = n - 1; i >= 0; i--) {
//             result[i] *= product2;  // multiply with suffix
//             product2 *= nums[i];    // update suffix
//         }

//         return result;

// //         // class Solution {
// // public:
// //     vector<int> productExceptSelf(vector<int>& nums) {
// //         int n = nums.size();
// //         vector<int> result(n, 1);

// //         int product1 = 1; // left product
// //         for (int i = 0; i < n; i++) {
// //             result[i] = product1;   // store prefix till i-1
// //             product1 *= nums[i];    // update prefix
// //         }

// //         int product2 = 1; // right product
// //         for (int i = n - 1; i >= 0; i--) {
// //             result[i] *= product2;  // multiply with suffix
// //             product2 *= nums[i];    // update suffix
// //         }

// //         return result;
//     }
// };
     int n=nums.size();
     vector<int>result(n,1);

     int left_product=1;
     int right_product=1;
     int k=0;
     int j=nums.size()-1;
     while(k<n && j>=0){
        result[k]*=left_product;
        left_product*=nums[k];

        result[j]*=right_product;
        right_product*=nums[j];

        j--;
        k++;
     }
     return result;
    }
};
