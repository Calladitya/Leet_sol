class Solution {
public:
    void reverseString(vector<char>& s) {
        reverseHelper(s, 0, s.size() - 1);
    }

private:
    void reverseHelper(vector<char>& s, int l, int r) {
        if (l >= r) return;
        swap(s[l], s[r]);
        reverseHelper(s, l + 1, r - 1);
    }
};


