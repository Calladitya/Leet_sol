class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        int count = 0;

        while(ss >> word) {
            words.push_back(word);
        }

        count = words[words.size() - 1].size();

        return count;
    }
};
