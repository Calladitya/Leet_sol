class Solution {
    private:
    bool isdivisibleby3(int num){
        return num%3==0;
    }
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        while(n>1){
            if(!isdivisibleby3(n)){
                return false;
            }
            n/=3;
        }
        return true;
    }
};
