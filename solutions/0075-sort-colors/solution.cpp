class Solution {
public:
    void sortColors(vector<int>& nums) {
       /* int k=0;
       map<int,int>mpp;
       for(auto it:nums){
        mpp[it]++;
       }
       vector<int> res;

       for(const auto&pair:mpp){
        if(pair.first==0){
           for(int i=0;i<pair.second;i++){
            nums[k]=pair.first;
            k++;
           }
        }
        if(pair.first==1){
           for(int i=0;i<pair.second;i++){
            nums[k]=pair.first;
            k++;
           }
        }
        if(pair.first==2){
           for(int i=0;i<pair.second;i++){
            nums[k]=pair.first;
            k++;
           }
        }
        */
       int low=0;int mid=0;int high=nums.size()-1;

      while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
      }
    }
       };
    

