class Solution {
public:
    bool threeFibonacciSum(int n) {
        int  a=0;int b=1; int c=1;
        int ans=0;
        while(true){
            ans=a+b+c;
            if(ans==n){
                return true;
            }
           if(ans > n){
               return false;
           }
            a=b;
            b=c;
            c=a+b;
        }
    }
};
