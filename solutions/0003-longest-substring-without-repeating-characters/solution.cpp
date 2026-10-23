class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;int r=0;
        int count=0; int freq[256]={};int maxi=0;
        while(r < s.size()){
          freq[s[r]]++;
          count++;
          while(freq[s[r]] > 1){
                freq[s[l]]--;
                l++;
                count--;
          }
         maxi=max(maxi,count);
          r++;
        }
        return maxi;;
    }
};
