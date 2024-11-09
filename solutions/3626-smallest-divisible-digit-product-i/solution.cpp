class Solution {
public:
    int smallestNumber(int n, int t) {
        while (true) {
            int product = 1;
            int k = n;
            
           
            while (k > 0) {
                int digit = k % 10;
                product *= digit;
                k /= 10;
            }
            
          
            if (product % t == 0) {
                return n;
            }
            
            n++;
        }
    }
};

