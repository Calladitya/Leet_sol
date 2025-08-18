class Solution {
public:
    vector<string> result;
    vector<string> mpp = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void backtrack(string &digits, int index, string current) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }
        int digit = digits[index] - '0'; // char -> int
        for (char ch : mpp[digit]) {
            backtrack(digits, index + 1, current + ch);
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        backtrack(digits, 0, "");
        return result;
    }
};

