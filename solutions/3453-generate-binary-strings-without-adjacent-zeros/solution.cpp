class Solution {
public:
vector<string>result;
void backtrack(int n,string curr){
    if(curr.size()==n){
        result.push_back(curr);
        return;
    }
    if(curr.empty() || curr.back()=='1'){
        backtrack(n,curr+"1");
        backtrack(n,curr+"0");
    }else{
        backtrack(n,curr+"1");
    }
}
    vector<string> validStrings(int n) {
      result.clear();
        backtrack(n,"");
        return result;
    }
}; 
