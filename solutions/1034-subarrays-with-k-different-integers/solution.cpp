// class Solution {
// public:
//     int subarraysWithKDistinct(vector<int>& nums, int k) {
//         map<int,int> freq;
//         int l = 0;
//         int r = 0;
//         int i = 0;

//         vector<vector<int>> result;

//         while(r != nums.size()) {
//             freq[nums[r]]++;
//             while(freq.size() > k) {

//                 freq[nums[l]]--;

//                 if(freq[nums[l]] == 0) {
//                     freq.erase(nums[l]);
//                 }

//                 l++;
//             }

//             if(freq.size() == k) {

//                 map<int,int> tempFreq = freq;
//                 i = l;

//                 while(tempFreq.size() == k) {

//                     vector<int> temp(nums.begin() + i,
//                                      nums.begin() + r + 1);

//                     result.push_back(temp);

//                     tempFreq[nums[i]]--;

//                     if(tempFreq[nums[i]] == 0) {
//                         tempFreq.erase(nums[i]);
//                     }

//                     i++;
//                 }
//             }

//             r++;
//         }

//         return result.size();
//     }
// };

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        map<int,int> freq1, freq2;

        int l1 = 0;
        int l2 = 0;
        int count = 0;

        for(int r = 0; r < nums.size(); r++) {

            freq1[nums[r]]++;
            freq2[nums[r]]++;

            while(freq1.size() > k) {
                freq1[nums[l1]]--;

                if(freq1[nums[l1]] == 0) {
                    freq1.erase(nums[l1]);
                }

                l1++;
            }

            while(freq2.size() > k - 1) {
                freq2[nums[l2]]--;

                if(freq2[nums[l2]] == 0) {
                    freq2.erase(nums[l2]);
                }

                l2++;
            }

            count += l2 - l1;
        }

        return count;
    }
};
