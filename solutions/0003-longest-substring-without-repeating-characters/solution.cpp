class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0;int l=0;
        int freq[256]={};
        int maxi=INT_MIN;
        while(r != s.size()){
            freq[s[r]]++;
            if(freq[s[r]]==1){
                maxi=max(maxi,r-l+1);
            }
            while(freq[s[r]] > 1){
                freq[s[l]]--;
                l++;
            }
            r++;
        }
        if(s.empty()){
            return 0;
        }
        return maxi;
    }
};
