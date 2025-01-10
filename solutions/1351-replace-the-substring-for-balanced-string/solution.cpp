class Solution {
public:
    int balancedString(string s) {
        int n = s.size(), target = n / 4;
        map<char, int> mpp;
        for (char c : s) {
            mpp[c]++;
        }
        if (mpp['Q'] <= target && mpp['W'] <= target && mpp['E'] <= target && mpp['R'] <= target) {
            return 0;
        }
        int l = 0, min_len = n;
        for (int r = 0; r < n; ++r) {
            mpp[s[r]]--; 
            while (mpp['Q'] <= target && mpp['W'] <= target && mpp['E'] <= target && mpp['R'] <= target) {
                min_len = min(min_len, r - l + 1); 
                mpp[s[l]]++;
                l++; 
            }
        }

        return min_len;
    }
};

