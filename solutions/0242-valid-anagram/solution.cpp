class Solution {
public:
    bool isAnagram(string s, string t) {

        int freq[256] = {};
        int window[256] = {};

        if(s.size() != t.size()) {
            return false;
        }

        for(char ch : s) {
            freq[ch]++;
        }

        for(char ch : t) {
            window[ch]++;
        }

        for(int i = 0; i < 256; i++) {
            if(freq[i] != window[i]) {
                return false;
            }
        }

        return true;
    }
};
