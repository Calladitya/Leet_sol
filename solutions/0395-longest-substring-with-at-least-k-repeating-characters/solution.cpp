class Solution {
public:
    int longestSubstring(string s, int k) {
        return helper(s, 0, s.size(), k);
    }

private:
    int helper(string& s, int start, int end, int k) {
        if (end - start < k) return 0;

        int hash[26] = {0};
        for (int i = start; i < end; i++) {
            hash[s[i] - 'a']++;
        }

        for (int i = start; i < end; i++) {
            if (hash[s[i] - 'a'] > 0 && hash[s[i] - 'a'] < k) {
                int nextStart = i + 1;
                while (nextStart < end && hash[s[nextStart] - 'a'] < k) {
                    nextStart++;
                }
                return max(helper(s, start, i, k), helper(s, nextStart, end, k));
            }
        }

        return end - start;
    }
};



