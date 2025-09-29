class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>result;
        vector<int>answer;
        int ans;
        while(n>0){
        ans=n%10;
        answer.push_back(ans);
        n=n/10;
        }
        for(int i=0;i<answer.size();i++){
            int val=answer[i]*pow(10,i);
            if(val!=0){
                result.push_back(val);
            }
        }
        reverse (result.begin(),result.end());
        return result;
    }
};
