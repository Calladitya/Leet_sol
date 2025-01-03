#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> prefix_sum_count;
        int prefix_sum = 0;
        int count = 0;
        prefix_sum_count[0] = 1;

        for (int num : nums) {
            prefix_sum += num;
            if (prefix_sum_count.find(prefix_sum - goal) != prefix_sum_count.end()) {
                count += prefix_sum_count[prefix_sum - goal];
            }
            prefix_sum_count[prefix_sum]++;
        }

        return count;
    }
};

