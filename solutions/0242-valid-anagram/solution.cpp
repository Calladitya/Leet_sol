class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
       int freq[256]={};
       int freq2[256]={};

    for(int i=0;i<s.size();i++){
        freq[s[i]]++;
      }
    for(int j=0;j<t.size();j++){
        freq2[t[j]]++;
      }
    for(int i=0;i<256;i++){
        if(freq[i] != freq2[i]){
         return false;
       }
     }

        return true;
    }
};
