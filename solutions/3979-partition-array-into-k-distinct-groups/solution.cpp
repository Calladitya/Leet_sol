class Solution {
public:
   // bool partitionArray(vector<int>& nums, int k) {
    //     int n = nums.size();
    //     if (n % k != 0) return false;  

    //     sort(nums.begin(), nums.end()); 
    //     unordered_map<int,int> freq;
    //     for (int x : nums) {
    //         freq[x]++;
    //     }

    //     for (int x : nums) {
    //         if (freq[x] == 0) continue; 
    //         for (int i = 0; i < k; i++) {
    //             if (freq[x + i] == 0) return false; 
    //             freq[x + i]--;
    //         }
    //     }
    //     return true;

  
    bool partitionArray(vector<int>& nums, int k) {
        int n = nums.size();
        if (n % k != 0) return false;  // must divide evenly

        unordered_map<int, int> freq;
        for (int x : nums) freq[x]++;

        int groups = n / k;
        for (auto &p : freq) {
            if (p.second > groups) return false;
        }

        return true;
    }
};


