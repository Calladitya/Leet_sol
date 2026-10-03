class Solution {
public:
    string minWindow(string s, string t) {

        int mini = INT_MAX;
        int r = 0;
        int l = 0;
        int count = 0;

        int freq[256] = {};

        // t ki required frequency
        for(char ch : t) {
            freq[ch]++;
        }

        int window[256] = {};

        int start = 0;

        while(r < s.size()) {

            // current character ko window mein add karo
            window[s[r]]++;

            // sirf tab count badhao jab required quantity ke andar hai
            if(window[s[r]] <= freq[s[r]]) {
                count++;
            }

            // Window valid ho gayi
            while(count == t.size()) {

                // minimum window update
                if(r - l + 1 < mini) {
                    mini = r - l + 1;
                    start = l;
                }
                if(window[s[l]] <= freq[s[l]]) {
                    count--;
                }

                window[s[l]]--;
                l++;
            }

            r++;
        }

        if(mini == INT_MAX) {
            return "";
        }

        return s.substr(start, mini);
    }
};
