class Solution {
public:
    bool judgeSquareSum(int c) {
        long long low = 0;
        long long high = sqrt(c);

        while (low <= high) {
            long long lowSquare = low * low;
            long long highSquare = high * high;
            
      if (lowSquare + highSquare > c) {
                high--;
            }
       
            else if (lowSquare + highSquare < c) {
                low++;
            }
            else {
                return true;
            }
        }
        return false; 
    }
};
