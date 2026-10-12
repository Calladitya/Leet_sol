// class Solution {
// public:
//     int rangeBitwiseAnd(int left, int right) {
//         long long ans=left;
//         for(long long i=left+1;i<=right;i++){
//           ans&=i;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int count = 0;

        while (left != right) {
            left >>= 1;
            right >>= 1;
            count++;
        }

        return left << count;
    }
};
