class Solution {
public:
    int maximumLength(string s) {
      /*  map<string, int> substringCount;
        int max_len = 0; 
        for (int i = 0; i < s.size(); i++) {
            string temp = ""; 
            for (int j = i; j < s.size(); j++) {
                temp += s[j];
                if (temp == string(temp.size(), temp[0])) {
                    substringCount[temp]++; 
                    if (substringCount[temp] >= 3) {
                        max_len = max(max_len, j - i + 1); 
                    }
                } else {
                    break; 
                }
            }
        }

        return max_len > 0 ? max_len : -1; */
        map<string, int> substringCount;
        int max_len = -1;             
        for (int start = 0; start < s.size(); start++) {
            int end = start;
            string temp = ""; 
            while (end < s.size() && s[end] == s[start]) {
                temp += s[end];       
                substringCount[temp]++; 
                if (substringCount[temp] >= 3) {
                    max_len = max(max_len, end - start + 1); 
                }
                end++; 
            }
        }

        return max_len; 
    }
};


