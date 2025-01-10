class Solution {
public:
    int maxVowels(string s, int k) {
        set<char> vowel = {'a', 'e', 'i', 'o', 'u'};
        int max_vowel = 0;
        int currentvowel = 0;

        // Handle edge case where string is smaller than k
        if (s.size() < k) return 0;

        // Count vowels in the first window of size k
        for (int i = 0; i < k; i++) {
            if (vowel.count(s[i])) {
                currentvowel++;
            }
        }
        max_vowel = currentvowel;
        for (int i = k; i < s.size(); i++) {
            if (vowel.count(s[i])) {
                currentvowel++;
            }
            if (vowel.count(s[i - k])) {
                currentvowel--;
            }
            max_vowel = max(max_vowel, currentvowel);
        }

        return max_vowel;
    }
};

