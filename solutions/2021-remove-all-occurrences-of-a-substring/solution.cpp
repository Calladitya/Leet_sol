class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char>st;
        int partlen=part.length();
        for(char ch : s){
            st.push(ch);
            if(st.size() >= partlen){
                  string temp="";//ye isliye banaya h kyuki isse hm hr baar check karege ki part uske equal h ya nhi 
                for(int i=0;i<partlen;i++){//isme jo temp ke under value ayegi vo hamesha partlen tk hi check hogi uske aage nhi jayegi
                    temp=st.top()+temp;
                    st.pop();
                }
                if(temp != part){
                    for(char c : temp){
                        st.push(c);//or agar hm yaha pe dekhe to pta chalega ki jo temp h vo part ke equal to nhi h to isliye isse hamne vapas se stack me daal diya
                    }
                }
            }
        }
        string result="";
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
