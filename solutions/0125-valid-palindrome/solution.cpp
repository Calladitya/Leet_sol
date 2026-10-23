
class Solution {
public:
    bool isPalindrome(string s) {
        stringstream ss(s);
        vector<char> word;

        for (char ch : s) {
            if (isalnum(ch)) {
                word.push_back(tolower(ch));
            }
        }

        int l = 0;
        int h = (int)word.size() - 1;

        while (l <= h) {
            if (word[l] != word[h]) {
                return false;
            }
            l++;
            h--;
        }

        return true;
    }
};

