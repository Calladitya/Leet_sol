class Solution {
public:
    int maximumLengthSubstring(string s) {
       int l = 0, r = 0, max_len = 0;
       map<char, int> mpp;
       
       while (r < s.size()) {
           mpp[s[r]]++; 
           while (mpp[s[r]] > 2) {
               mpp[s[l]]--; 
               if (mpp[s[l]] == 0) {
                   mpp.erase(s[l]);  
               }
               l++;  
           }
           max_len = max(max_len, r - l + 1);
           r++;  
       }
       return max_len;  
    }
};

