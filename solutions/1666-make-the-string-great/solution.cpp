class Solution {
public:
    string makeGood(string s) {
     stack<char>st;
     for(char ch : s){
       if (!st.empty() && abs(st.top() - ch) == 32) {//for compairing small letter with uppper case letter that,s why abs(st.top() - ch) == 32 has been apply
            st.pop();
        }else{
            st.push(ch);
        }
     }
     string result="";
     while(!st.empty()){
        result+=st.top();
        st.pop();
     }   
     reverse(result.begin(),result.end());
     return result;
    }
};
