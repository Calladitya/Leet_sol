class Solution {
public:
    int longestContinuousSubstring(string s) {
        int max_len = 1;
        int l = 0;      
        for (int r = 1; r < s.size(); r++) {
            if (s[r] - s[r - 1] == 1) {
                max_len = max(max_len, r - l + 1);
            } else {
                l = r;
            }
        }

        return max_len;
    }
};

