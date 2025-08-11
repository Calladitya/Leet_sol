class Solution {
    private:
     bool iseven(int num){
        return num%2==0;
     }
public:
    bool isPowerOfTwo(int n) {
        if(n<1) return false;

        while(n>1){
            if(!iseven(n)) return false;//for checking for odd no
            n/=2;
        }
        return true;
    }
};
