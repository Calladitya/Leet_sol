class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count=0;
        for(int i=num1;i<=num2;i++){
        string s=to_string(i);
            int n=s.size();

            if(n<3) continue;
            int wav=0;
            for(int j=1;j<n-1;j++){
                int left=s[j-1]-'0';
                int mid=s[j]-'0';
                int right=s[j+1]-'0';

                if(mid>left && mid>right){
                    wav++;
                }
                else if(mid<left && mid<right){
                    wav++;
                }
            }
            count+=wav;
        }
        return count;
    }
};
