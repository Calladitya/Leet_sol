class Solution {
    private:
    bool isEven(int num){
      return num%4==0;
    }
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
       while(n > 1){
        if(!isEven(n)){
          return false;
        }
        n/=4;
       }
       return true;
 }
};
