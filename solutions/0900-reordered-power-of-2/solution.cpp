class Solution {
public:
    bool reorderedPowerOf2(int n) {
         if (n <= 0) return false;

    string s = to_string(n);
    sort(s.begin(), s.end()); 
    if (s[0] != '0') {
        int num = stoi(s);
        if ((num & (num - 1)) == 0) return true;
    }
    for (; next_permutation(s.begin(), s.end()); ) {
        if (s[0] == '0') continue; // skip leading zero numbers
        int num = stoi(s);
        if ((num & (num - 1)) == 0) return true;
    }

    return false;
    }
};
