class Solution {
public:
    // Helper function to get next character
    char nextChar(char ch) {
        return (ch == 'z') ? 'a' : ch + 1;
    }

    char kthCharacter(int k) {
        std::string word = "a";
        while ((int)word.length() < k) {
            std::string next = "";
            for (char ch : word) {
                next += nextChar(ch);
            }
            word += next;
        }
        return word[k - 1];  // 0-based index
    }
};


