class Solution {
public:
    int reverseBits(int n) {
        string result = "";
        int rem = 0;
        for (int i = 0; i < 32; i++) {
            rem = n & 1;//isse no ki last nit nikalti h 
            result.push_back(rem + '0');// reverse order me hi pushing hogi ;
            n = (unsigned int)n >> 1; //n=n/2;
        }

        int result2 = 0;

        for (char bit : result) {
            result2 = result2 * 2 + (bit - '0');
        }

        return result2;
    }
};
