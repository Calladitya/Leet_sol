class Solution {
public:
    bool isIsomorphic(string s, string t) {

        map<char,char> mpp;
        map<char,char> mpp1;

        for(int i = 0; i < s.size(); i++) {

            // s -> t
            if(mpp.find(s[i]) != mpp.end()) {

                if(mpp[s[i]] != t[i]) {
                    return false;
                }

            }
            else {
                mpp[s[i]] = t[i];
            }


            // t -> s
            if(mpp1.find(t[i]) != mpp1.end()) {

                if(mpp1[t[i]] != s[i]) {
                    return false;
                }

            }
            else {
                mpp1[t[i]] = s[i];
            }
        }

        return true;
    }
};
