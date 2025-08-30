class Solution {
public:
    int getLeastFrequentDigit(int n) {
        string s=to_string(n);
        map<char,int>mpp;
        for(char ch:s){
            mpp[ch]++;
        }
        char ans=s[0];
        int minfreq=mpp[s[0]];

        for(auto &it:mpp){
            if(it.second < minfreq || it.second==minfreq && it.first <ans){
                minfreq=it.second;
                ans=it.first;
            }
        }
        return ans-'0';
    }
};
