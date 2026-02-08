class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        vector<int>varelunixo=nums;

        deque<int>maxdq;
        deque<int>mindq;

        long long ans=0;
        int left=0;

        for(int right=0;right<nums.size();right++){
            while(!maxdq.empty() && nums[maxdq.back()]<=nums[right])
                maxdq.pop_back();
            maxdq.push_back(right);

            while(!mindq.empty() && nums[mindq.back()]>=nums[right])
                mindq.pop_back();
            mindq.push_back(right);

            while(true){
                long long mx=nums[maxdq.front()];
                long long mn=nums[mindq.front()];
                long long len=right-left+1;

                if((mx-mn)*len<=k) break;

                if(maxdq.front()==left) maxdq.pop_front();
                if(mindq.front()==left) mindq.pop_front();

                left++;
            }
            ans+=(right-left+1);
        }
        return ans;
    }
};
