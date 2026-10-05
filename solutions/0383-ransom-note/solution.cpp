class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int freq[256] = {};
        int window[256] = {};

        for(char ch : magazine) {
            freq[ch]++;
        }

        for(char ch : ransomNote) {
            window[ch]++;

            if(window[ch] > freq[ch]) {
                return false;
            }
        }

        return true;
    }
};
