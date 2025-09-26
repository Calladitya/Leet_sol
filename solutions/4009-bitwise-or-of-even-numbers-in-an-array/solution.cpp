// class Solution {
// public:
//     int evenNumberBitwiseORs(vector<int>& nums) {
//         vector<int>result;
//         int ans=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]%2!=0){
//                 return 0;
//             }else{
//                result.push_back(nums[i]);
//                 ans=0;
//                 for(int j=0;j<result.size();j++){
//                 ans=ans|result[j];
//             }
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {  
                ans |= nums[i];
            }
        }
        return ans; 
    }
};

