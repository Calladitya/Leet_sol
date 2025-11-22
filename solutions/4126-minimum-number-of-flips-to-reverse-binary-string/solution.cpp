class Solution {
public:
    int minimumFlips(int n) {
        string binary="";
        while(n>0){
            int bit=n%2;
            binary+=bit+'0';
            n/=2;
        }
        reverse(binary.begin(),binary.end());

        string rev=binary;
        reverse(rev.begin(),rev.end());
        int flip=0;
        for(int i=0;i<binary.size();i++){
            if(binary[i]!=rev[i]){
                flip+=1;
            }
        }
        return flip;
    }
};
