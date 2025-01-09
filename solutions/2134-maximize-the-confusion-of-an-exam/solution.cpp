class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int l = 0, max_len = 0, countT = 0, countF = 0;

        for (int r = 0; r < answerKey.size(); r++) {
            if (answerKey[r] == 'T') {
                countT++;
            } else {
                countF++;
            }
            while (min(countT, countF) > k) {
                if (answerKey[l] == 'T') {
                    countT--;
                } else {
                    countF--;
                }
                l++;
            }
            max_len = max(max_len, r - l + 1);
        }
        
        return max_len;
    }
};

