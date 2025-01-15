class Solution {
public:
    string reversePrefix(string word, char ch) {
       std:: stack<char >st;
       int index=-1;
       for(int  i=-0;i<word.size();i++){
         if(word[i]==ch){
            index=i;
            break;
         }
       }
         if(index==-1){
            return word;
         }
         for(int i=0;i<=index;i++){
            st.push(word[i]);
         }
         std::string result;
         while(!st.empty()){
            result += st.top();
            st.pop();
         }
         result += word.substr(index + 1);
         return result;
       
    }
};
