class Solution {
public:
    int maximum69Number (int num) {
        string s= to_string(num);
        int maxi=num;
        for(int i=0;i<s.size();i++){
            string temp=s;
            if(temp[i]=='6'){
                temp[i]='9';
            }
                else{
                    temp[i]='6';
                }
           int nums=stoi(temp);
            maxi=max(maxi,nums);
        }
        return maxi;
    }
};
