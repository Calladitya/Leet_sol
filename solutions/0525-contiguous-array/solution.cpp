class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp[0] = -1;

        int count1 = 0, count0 = 0, maxi = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1) count1++;
            else count0++;

            int diff = count1 - count0;

            if(mp.count(diff))
                maxi = max(maxi, i - mp[diff]);
            else
                mp[diff] = i;
        }
        return maxi;
    }
};

