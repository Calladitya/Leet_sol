class Solution {
public:
    bool scoreBalance(string s) {
        long long sumLeft = 0;
        long long sumRight = 0;
        int n = s.size();

        if (n == 0) return false;

        sumLeft = s[0]-'a'+1;
        for (int i = 1; i < n; i++) {
            sumRight += s[i]-'a'+1;
        }

        if (sumLeft == sumRight) return true;

        for (int i = 1; i < n; i++) {
            sumLeft += s[i]-'a'+1;
            sumRight -= s[i]-'a'+1;
            if (sumLeft == sumRight) {
                return true;
            }
        }
        return sumLeft == sumRight;
    }
};

