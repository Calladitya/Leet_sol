class Solution {
public:
vector<vector<int>>result;
 void backtrack(int n,int k,vector<int>temp ,int start){
    if(temp.size()==k){
           result.push_back(temp);
           return;
    }
    for(int i=start;i<=n;i++){
        temp.push_back(i);
        backtrack(n,k,temp,i+1);
        temp.pop_back();
    }

 }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        backtrack(n,k,temp,1);

        return result;
    }
};
