class Solution {
public:
    int minLengthAfterRemovals(string s) {
        unordered_map<char,int>freq;
        for(char c:s){
            freq[c]++;
        }
        int n=s.size();
        int maxf=0;
        for(auto & it:freq) maxf=max(maxf,it.second);

        if(maxf<=n-maxf)return 0;
        return 2*maxf-n;
    }
};
