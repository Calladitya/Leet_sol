// class Solution {
// public:
//     string reverseWords(string s) {
//         vector<string>reverse,original;
//         stringstream ss(s);
//         string word;
//        while(ss>>word){
//         original.push_back(word);
//        }
//        for(int i=original.size()-1;i>=0;i--){
//         reverse.push_back(original[i]);
//        }
//         string ans;
         
//          for(int i=0;i<reverse.size();i++){
//             ans+=reverse[i];

//          if(i!=reverse.size()-1){
//             ans+=" ";
//          }
//          }
//          return ans;
//     }
// };

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        stringstream ss(s);
        string word;

        while(ss >> word) {
            words.push_back(word);
        }

        string ans;

        for(int i = words.size() - 1; i >= 0; i--) {
            ans += words[i];

            if(i != 0) {
                ans += " ";
            }
        }

        return ans;
    }
};
