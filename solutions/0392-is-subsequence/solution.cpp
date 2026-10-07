class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count = 0;
        int j = 0;

        for(char ch : s) {
            while(j < t.size()) {
                if(ch == t[j]) {
                    count++;
                    j++;
                    break;
                }
                j++;
            }
        }

        if(count == s.size()) {
            return true;
        }

        return false;
    }
};

