class Solution {
public:
vector<vector<string>>result;
bool ispalindrome(string s,int start,int end){
    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
void backtrack(string s,vector<string>temp,int index){
    if(index==s.size()){
        result.push_back(temp);
        return;
    }
    for(int i=index;i<s.size();i++){
        if(ispalindrome(s,index,i)){
            string sub=s.substr(index,i-index+1);
            temp.push_back(sub);
            backtrack(s,temp,i+1);
            temp.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<string> temp;
        backtrack(s, temp, 0);
        reverse(result.begin(), result.end());  
        return result;
    }
};
