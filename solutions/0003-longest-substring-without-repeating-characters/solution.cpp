class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      /*  int max_len = 0;  
        int len = 0;     
        int hash[256] = {0}; 
        for(int i = 0; i < s.size(); i++) {
            fill(begin(hash), end(hash), 0);  
            for(int j = i; j < s.size(); j++) {
                if (hash[s[j]] > 0) {
                    break;
                }
                hash[s[j]]++;
                len = j - i + 1; 
                max_len = max(max_len, len);
            }
        }
        
        return max_len;*/
        int l = 0; 
        int max_len = 0; 
        map<char, int> mpp; 
        int n = s.size();
        for (int r = 0; r < n; r++) { 
            if (mpp.find(s[r]) != mpp.end() && mpp[s[r]] >= l) {
                l = mpp[s[r]] + 1; 
            }
            mpp[s[r]] = r;
            max_len = max(max_len, r - l + 1);
        }
        return max_len;
    }
};

