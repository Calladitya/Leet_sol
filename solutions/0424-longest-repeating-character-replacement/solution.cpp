class Solution {
public:
    int characterReplacement(string s, int k) {
    unordered_map<char, int> char_count;
    int left = 0, max_freq = 0, max_length = 0;

    for (int right = 0; right < s.length(); ++right) {
        char_count[s[right]]++;
        max_freq = max(max_freq, char_count[s[right]]);
        int window_size = right - left + 1;
        if (window_size - max_freq > k) {
            char_count[s[left]]--;
            left++;
        }
        max_length = max(max_length, right - left + 1);
    }

    return max_length;
}
};
