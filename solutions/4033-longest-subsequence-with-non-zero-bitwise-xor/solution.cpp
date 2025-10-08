// class Solution {
// public:
//     int longestSubsequence(vector<int>& nums) {
//         int ans=0;
//         //int max=INT_MIN;
//         vector<int>answer;
//         for(int i=0;i<nums.size();i++){
//             ans^=nums[i];
//         }
//         if(ans!=0){
//             return nums.size();
//         }
//        else {
//             if (nums.size() == 0) return 0; 
//             return nums.size() - 1;
//         }
//     }
// };

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int totalXor = 0;
        bool hasNonZero = false;

        for (int x : nums) {
            totalXor ^= x;
            if (x != 0) hasNonZero = true;
        }

        if (!hasNonZero) return 0;      
        if (totalXor != 0) return nums.size();  
        return nums.size() - 1;         
    }
};

