
class Solution {
public:
    int maximumLength(string s) {
        map<pair<char, int>, int> mpp;
        int l = 0, r = 0;

        while (r < s.size()) {
            if (s[l] != s[r]) {
                l = r;
            }

            int len = r - l + 1;

            for (int start = l; start <= r; start++) {
                int subLen = r - start + 1;
                mpp[{s[r], subLen}]++;
            }

            r++;
        }

        int ans = -1;

        for (auto it : mpp) {
            if (it.second >= 3) {
                ans = max(ans, it.first.second);
            }
        }

        return ans;
    }
};
