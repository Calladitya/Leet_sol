class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int> pq;
       int count=1;
       for(int i=0;i<nums.size();i++){
         pq.push(nums[i]);
       }
       while(count!=k){
        pq.pop();
        count++;
       }
       if(count==k){
        return pq.top();
       }
       return -1;
    }
};

