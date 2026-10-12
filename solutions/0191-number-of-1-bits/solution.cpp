class Solution {
public:
    int hammingWeight(int n) {
    
        int count=0;
        int rem=0;
        for(int i=0;i<32;i++){
            rem=n&1;
            if(rem==1){
                count++;
            }
            n = (unsigned int)n >> 1;
        }
        return count;
    }
};
