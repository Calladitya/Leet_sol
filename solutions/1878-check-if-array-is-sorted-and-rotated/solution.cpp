class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%nums.size()]){
                count+=1;
            }
        }
        if(count <= 1){
            return true;
        }
        return false;
    }
};
// class Solution {
//     private:
//      bool is_Sorted(vector<int>& nums,int start,int end){
//           for(int i=start;i<end;i++){
//             if(nums[i]>nums[i+1]){
//                 return false;
//             }
//           }
//           return true;
//     }
// public:
//     bool check(vector<int>& nums) {
//         int k=-1;
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]>nums[i+1]){
//                 k=i;
//                 break;
//             }
//         }
//         if(k==-1){
//             return true;
//         }
//         bool left = is_Sorted(nums,0,k);
//         bool right = is_Sorted(nums,k+1,nums.size()-1);

//         if(left&&right&&nums[nums.size()-1] <= nums[0]){
//             return true;
//         }
//         return false;
//     }

