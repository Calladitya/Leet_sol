class Solution {
public:
    bool isHappy(int n) {
        set<int>seen;
        while(n!=1){
            if(seen.find(n)!=seen.end()){
                return false;
            }
            seen.insert(n);
        string s=to_string(n);
        vector<int>result;
        for(char ch:s){
            result.push_back(stoi(string(1,ch)));
        }
        int sum=0;
        for(int i=0;i<result.size();i++){
            sum+=result[i]*result[i];
        }
        n=sum;
     }
     if(n==1){
        return true;
     }
     else{
        return false;
     }
    }
};
